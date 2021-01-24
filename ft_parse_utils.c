/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_parse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerebus <cerebus@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 23:48:21 by cerebus           #+#    #+#             */
/*   Updated: 2021/01/14 23:53:52 by cerebus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_parse_utils.h"

void ft_print_width(int width_symbol_num, char width_symbol, int *res_len)
{
    while (width_symbol_num > 0)
    {
        write(1, &width_symbol, 1);
        (*res_len)++;
        width_symbol_num--;
    }
}

void ft_print_minus(char **start_p, int *res_len)
{
        write(1, "-", 1);
        (*start_p)++;
        (*res_len)++;
}

void ft_print_precis(int zero_num, int *res_len) {
    while (zero_num > 0) {
        write(1, "0", 1);
        (*res_len)++;
        zero_num--;
    }
}

int ft_calc_width(t_print_flags *my_struct, char *width_symbol, int width_symbol_num, int num_len, int print_num)
{
    if (my_struct->flag_zero)
        (*width_symbol) = '0';
    //считаем пробелы без вычета нулей
    width_symbol_num = my_struct->width - num_len;
    //если число меньше нуля еще уменьшаем
    if (print_num < 0)
        width_symbol_num--;
    return width_symbol_num;
}


