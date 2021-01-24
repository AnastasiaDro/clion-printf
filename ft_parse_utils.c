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
#include "ft_printf.h"

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

void ft_print_precis(int zero_num, int *res_len)
{
    while (zero_num > 0)
    {
        write(1, "0", 1);
        (*res_len)++;
        zero_num--;
    }
}
