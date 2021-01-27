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

#ifndef FT_PARSE_UTILS_H
#define FT_PARSE_UTILS_H
#include "ft_printf.h"
#include "ft_parse_utils.h"

//печать символов ширины
void ft_print_width(char width_symbol, t_print_flags *my_struct);
//вывод минуса
void ft_print_minus(char **start_p, t_print_flags *my_struct);

void ft_print_precis(t_print_flags *my_struct);

int ft_calc_width(t_print_flags *my_struct, char *width_symbol, int num_len, int print_num);

#endif
