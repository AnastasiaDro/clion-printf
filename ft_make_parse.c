/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_parse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerebus <cerebus@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 23:48:21 by cerebus           #+#    #+#             */
/*   Updated: 2021/01/28 15:48:22 by cerebus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//внимание! тут подключаю другую либу! нужно со школьного мака
//взять правильную
#include "ft_printf.h"
#include "print_utils.h"
#include "num_utils.h"
#include <stdio.h>

int ft_make_parse(t_print_flags *my_struct, va_list *v_list)
{
	char symbol;

	symbol = my_struct->type;
	//если знак поцента
	if (symbol == '%')
    {
        write(1,"%%", 1);
        my_struct->length++;
    }
	if (symbol == 'c')
		ft_print_char(my_struct, v_list);
	if (symbol == 's')
		ft_print_string(my_struct, v_list);
	if (symbol == 'd' || symbol =='i')
		ft_print_int(my_struct, v_list);
	if (symbol == 'u')
        ft_print_u(my_struct, v_list);
	if (symbol == 'X' || symbol =='x')
        ft_print_Xx(my_struct, v_list);
	return (my_struct->length);
}

int ft_print_int(t_print_flags *my_struct, va_list *v_list)
{
	//длина нашего инта
	int		num_len;
	int		print_num;
	char	*num_string;

	//наше число для печати
	print_num = va_arg(*v_list, int);
	//вычисляем длину инта
    if (print_num < 0)
    {
        my_struct->less_zero = 1;
        print_num = print_num * (-1);
    }
    num_len = ft_get_capacity((unsigned int)print_num, 10);
	num_string = ft_get_s(print_num, num_len, my_struct->type);
	//если есть ширина
	if (my_struct->width)
	    ft_calc_width(my_struct, num_len);
	//если есть точность, считаем нули
	if (my_struct->precis)
        ft_calc_precis(my_struct, num_len);
	//если  не минус
	if (!(my_struct->flag_minus))
        ft_print_right_align(my_struct, num_string);
	else
        ft_print_left_align(my_struct, num_string);
	free(num_string);
	num_string = NULL;
	return (1);
}

int ft_print_string(t_print_flags *my_struct, va_list *v_list)
{
    char    *str_for_print;
    int     str_len;

    str_for_print = va_arg(*v_list, char *);
    str_len = ft_strlen(str_for_print);
    //узнаем длину строки с учетом точности
    //и присвоим итоговой длине выведенной строки
    if (my_struct->precis < str_len)
        str_len = my_struct->precis;
    //узнаем количество символов ширины
    if (my_struct->width > str_len)
        my_struct->width = my_struct->width - str_len;
    if(!(my_struct->flag_minus))
    {
        ft_print_width(my_struct);
        my_struct->length = my_struct->length + ft_putstr_printf(str_for_print, str_len);
    }
    else
    {
        my_struct->length = my_struct->length + ft_putstr_printf(str_for_print, str_len);
        ft_print_width(my_struct);
    }
    return (1);
}


int ft_print_char(t_print_flags *my_struct, va_list *v_list)
{
    char    char_for_print;

    char_for_print = (char)va_arg(*v_list, int);
    my_struct->width--;

    if (!(my_struct->flag_minus))
    {
        ft_print_width(my_struct);
        write(1, &char_for_print, 1);
        my_struct->length++;
    }
    else
    {
        write(1, &char_for_print, 1);
        my_struct->length++;
        ft_print_width(my_struct);
    }
	return (1);
}

int ft_print_Xx(t_print_flags *my_struct, va_list *v_list)
{
    unsigned int     print_num;
    int		num_len;
    char	*x_num_string;

    //наше число для печати
    print_num = va_arg(*v_list, unsigned int);
    num_len = ft_get_capacity(print_num, 16);
    x_num_string = ft_get_unsign_s(print_num, num_len, my_struct->type);
    if (my_struct->width)
        ft_calc_width(my_struct, num_len);
    if (my_struct->precis)
        ft_calc_precis(my_struct, num_len);
    if (!(my_struct->flag_minus))
        ft_print_right_align(my_struct, x_num_string);
    else
        ft_print_left_align(my_struct, x_num_string);
    free(x_num_string);
    x_num_string = NULL;
    return (1);
}

int ft_print_u(t_print_flags *my_struct, va_list *v_list)
{
    unsigned int     print_num;
    int		         num_len;
    char	         *num_string;

    //наше число для печати
    print_num = va_arg(*v_list, unsigned int);
    num_len = ft_get_capacity(print_num, 10);
    num_string = ft_get_unsign_s(print_num, num_len, my_struct->type);
    if (my_struct->width)
        ft_calc_width(my_struct, num_len);
    if (my_struct->precis)
        ft_calc_precis(my_struct, num_len);
    if (!(my_struct->flag_minus))
        ft_print_right_align(my_struct, num_string);
    else
        ft_print_left_align(my_struct, num_string);
    free(num_string);
    num_string = NULL;
    return (1);
}


