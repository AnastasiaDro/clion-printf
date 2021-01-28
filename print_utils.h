/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_utils.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerebus <cerebus@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 23:48:21 by cerebus           #+#    #+#             */
/*   Updated: 2021/01/28 15:47:40 by cerebus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PARSE_UTILS_H
#define FT_PARSE_UTILS_H
#include "ft_printf.h"

//печать символов ширины
void ft_print_width(t_print_flags *my_struct);
//вывод минуса
void ft_print_minus(t_print_flags *my_struct);

void ft_print_precis(t_print_flags *my_struct);

int ft_calc_width(t_print_flags *my_struct, int num_len, int print_num);

int ft_calc_precis(t_print_flags *my_struct, int num_len);

void ft_print_right_align(t_print_flags *my_struct, int print_num, char *num_string);

void ft_print_left_align(t_print_flags *my_struct, int print_num, char *num_string);

#endif
