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

void ft_print_width(t_print_flags *my_struct)
{
    while (my_struct->width > 0)
    {
        write(1, &(my_struct->width_symbol), 1);
        my_struct->length++;
        my_struct->width--;
    }
}

void ft_print_minus(t_print_flags *my_struct)
{
        write(1, "-", 1);
        my_struct->length++;
}

void ft_print_precis(t_print_flags *my_struct)
{
    while (my_struct->precis > 0) {
        write(1, "0", 1);
        my_struct->length++;
        my_struct->precis--;
    }
}

int ft_calc_width(t_print_flags *my_struct, int num_len, int print_num)
{
    if (my_struct->flag_zero)
        my_struct->width_symbol = '0';
    //считаем пробелы без вычета нулей
    my_struct->width = my_struct->width - num_len;
    //если число меньше нуля еще уменьшаем
    if (print_num < 0)
        my_struct->width--;
    return my_struct->width;
}

int ft_calc_precis(t_print_flags *my_struct, int num_len)
{
    my_struct->precis = my_struct->precis - num_len;
	my_struct->width_symbol = ' ';
	if (my_struct->precis > 0)
        my_struct->width = my_struct->width - my_struct->precis;
    return my_struct->precis;
}

void ft_print_right_align(t_print_flags *my_struct, int print_num, char *num_string)
{
    ft_print_width(my_struct);
	if (print_num < 0)
        ft_print_minus(my_struct);
    ft_print_precis(my_struct);
    my_struct->length = my_struct->length + ft_putstr_printf(num_string, 0);
}

void ft_print_left_align(t_print_flags *my_struct, int print_num, char *num_string)
{
	   if (print_num < 0)
            ft_print_minus(my_struct);
        ft_print_precis(my_struct);
        my_struct->length = my_struct->length + ft_putstr_printf(num_string, 0);
        //в конце пробелы
        ft_print_width(my_struct);
}