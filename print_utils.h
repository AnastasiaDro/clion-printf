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
void ft_print_width(t_print_flags *my_struct, int width);
//вывод минуса
void ft_print_minus(t_print_flags *my_struct);

void ft_print_precis(t_print_flags *my_struct, int precis);

int ft_calc_width(t_print_flags *my_struct, int num_len);

//int ft_calc_precis(t_print_flags *my_struct, int num_len);
int ft_calc_precis(t_print_flags *my_struct, int num_len, int *width);

//void ft_print_right_align(t_print_flags *my_struct, char *num_string);
void ft_print_right_align(t_print_flags *my_struct,  char *num_string, int width, int precis);
//void ft_print_left_align(t_print_flags *my_struct, char *num_string);
void ft_print_left_align(t_print_flags *my_struct, char *num_string, int width, int precis);

int ft_print(t_print_flags *my_struct, int num_len, char *num_string);

#endif
