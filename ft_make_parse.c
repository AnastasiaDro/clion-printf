/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_parse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerebus <cerebus@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 23:48:21 by cerebus           #+#    #+#             */
/*   Updated: 2021/02/02 20:02:54 by cerebus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "print_utils.h"
#include "parse_nums_funcs.h"


int ft_make_parse(t_print_flags *my_struct, va_list *v_list)
{
	char symbol;

	symbol = my_struct->type;
	if (symbol == '%')
		ft_print_percent(my_struct);
	if (symbol == 'c')
		ft_print_char(my_struct, v_list);
	if (symbol == 's')
		ft_print_string(my_struct, v_list);
	if (symbol == 'd' || symbol =='i')
		ft_parse_int(my_struct, v_list);
	if (symbol == 'u')
		ft_parse_u(my_struct, v_list);
	if (symbol == 'X' || symbol =='x')
		ft_parse_Xx(my_struct, v_list);
    if (symbol == 'p')
		ft_parse_pointer(my_struct, v_list);
	return (my_struct->length);
}

int ft_print_string(t_print_flags *my_struct, va_list *v_list)
{
    char    *str_for_print;
    int     str_len;

    str_for_print = va_arg(*v_list, char *);
	if (!str_for_print)
		str_for_print = "(null)";
    str_len = ft_strlen(str_for_print);
    if (my_struct->precis < str_len && my_struct->dot)
        str_len = my_struct->precis;
    my_struct->width = my_struct->width - str_len;
    if(!(my_struct->flag_minus))
    {
        ft_print_width(my_struct, my_struct->width);
        my_struct->length = my_struct->length + ft_putstr_printf(str_for_print, str_len, my_struct);
    }
    else
    {
        my_struct->length = my_struct->length + ft_putstr_printf(str_for_print, str_len, my_struct);
        ft_print_width(my_struct, my_struct->width);
    }
    return (1);
}

int ft_print_percent(t_print_flags *my_struct)
{
	char *percent;
    
	percent = "%";
	ft_print(my_struct, 1, percent);
	return (1);
}

int ft_print_char(t_print_flags *my_struct, va_list *v_list)
{
    char    char_for_print;

    char_for_print = (char)va_arg(*v_list, int);
    my_struct->width--;
    if (!(my_struct->flag_minus))
    {
        ft_print_width(my_struct, my_struct->width);
        write(1, &char_for_print, 1);
        my_struct->length++;
    }
    else
    {
        write(1, &char_for_print, 1);
        my_struct->length++;
        ft_print_width(my_struct, my_struct->width);
    }
	return (1);
}
