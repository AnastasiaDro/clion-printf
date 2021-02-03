/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_width_precis.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerebus <cerebus@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 13:42:14 by cerebus           #+#    #+#             */
/*   Updated: 2021/02/03 14:14:14 by cerebus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_WIDTH_PRECIS_H
# define PRINT_WIDTH_PRECIS_H
# include "ft_printf.h"

void	ft_print_width(t_print_flags *my_struct, int width);

void	ft_print_precis(t_print_flags *my_struct, int precis);

int		ft_calc_width(t_print_flags *my_struct, int num_len);

int		ft_calc_precis(t_print_flags *my_struct, int num_len, int *width);

#endif
