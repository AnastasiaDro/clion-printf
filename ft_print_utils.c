/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerebus <cerebus@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 23:48:21 by cerebus           #+#    #+#             */
/*   Updated: 2021/01/28 12:51:27 by cerebus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "print_utils.h"

void ft_print_width(char width_symbol, t_print_flags *my_struct)
{
    while (my_struct->width > 0)
    {
        write(1, &width_symbol, 1);
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

int ft_calc_width(t_print_flags *my_struct, char *width_symbol, int num_len, int print_num)
{
    if (my_struct->flag_zero)
        (*width_symbol) = '0';
    //считаем пробелы без вычета нулей
    my_struct->width = my_struct->width - num_len;
    //если число меньше нуля еще уменьшаем
    if (print_num < 0)
        my_struct->width--;
    return my_struct->width;
}
