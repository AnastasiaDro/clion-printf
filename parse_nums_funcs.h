/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_nums_funcs.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerebus <cerebus@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 19:55:35 by cerebus           #+#    #+#             */
/*   Updated: 2021/02/02 20:02:56 by cerebus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_NUMS_FUNCS_H
# define PARSE_NUMS_FUNCS_H
# include "ft_printf.h"

int ft_parse_pointer(t_print_flags *my_struct, va_list *v_list);

int ft_parse_int(t_print_flags *my_struct, va_list *v_list);

int ft_parse_xx(t_print_flags *my_struct, va_list *v_list);

int ft_parse_u(t_print_flags *my_struct, va_list *v_list);
#endif
