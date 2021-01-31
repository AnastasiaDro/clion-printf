/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerebus <cerebus@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 23:48:21 by cerebus           #+#    #+#             */
/*   Updated: 2021/01/28 15:41:12 by cerebus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "print_utils.h"

void ft_print_width(t_print_flags *my_struct, int width)
{
    while (width > 0)
    {
        write(1, &(my_struct->width_symbol), 1);
        my_struct->length++;
        width--;
    }
}

void ft_print_minus(t_print_flags *my_struct)
{
        write(1, "-", 1);
        my_struct->length++;
}

void ft_print_precis(t_print_flags *my_struct, int precis)
{
    while (precis > 0) {
        write(1, "0", 1);
        my_struct->length++;
       precis--;
    }
}

int ft_calc_width(t_print_flags *my_struct, int num_len)
{
	int width;

	width = my_struct->width;
    if (my_struct->flag_zero)
        my_struct->width_symbol = '0';
    //считаем пробелы без вычета нулей
    width = my_struct->width - num_len;
    //если число меньше нуля еще уменьшаем
    if (my_struct->less_zero)
        width--;
    return width;
}

int ft_calc_precis(t_print_flags *my_struct, int num_len, int *width)
{
	int precis;

    precis = my_struct->precis - num_len;
	my_struct->width_symbol = ' ';
	if (precis > 0)
        *width = *width - precis;
    return my_struct->precis;
}

void ft_print_right_align(t_print_flags *my_struct,  char *num_string, int width, int precis)
{
    ft_print_width(my_struct, width);
	if (my_struct->less_zero)
        ft_print_minus(my_struct);
    ft_print_precis(my_struct, precis);
    my_struct->length = my_struct->length + ft_putstr_printf(num_string, 0, my_struct->dot);
}

void ft_print_left_align(t_print_flags *my_struct, char *num_string, int width, int precis)
{
    if (my_struct->less_zero)
        ft_print_minus(my_struct);
	ft_print_precis(my_struct, precis);
    my_struct->length = my_struct->length + ft_putstr_printf(num_string, 0, my_struct->dot);
	ft_print_width(my_struct, width);
}

int ft_print(t_print_flags *my_struct, int num_len, char *num_string)
{
	int		width;
	int 	precis;

	width = 0;
	precis = 0;
	if (my_struct->width)
		width = ft_calc_width(my_struct, num_len);
	//если есть точность, считаем нули
	if (my_struct->precis)
		precis = ft_calc_precis(my_struct, num_len, &width);
	//если  не минус
	if (!(my_struct->flag_minus))
		ft_print_right_align(my_struct, num_string, width, precis);
	else
		ft_print_left_align(my_struct, num_string, width, precis);
	return 1;
}
