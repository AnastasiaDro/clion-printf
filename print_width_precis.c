/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_width_precis.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerebus <cerebus@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 13:43:46 by cerebus           #+#    #+#             */
/*   Updated: 2021/02/03 13:54:39 by cerebus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_width(t_print_flags *my_struct, int width)
{
	while (width > 0)
	{
		write(1, &(my_struct->width_symbol), 1);
		my_struct->length++;
		width--;
	}
}

void	ft_print_precis(t_print_flags *my_struct, int precis)
{
	while (precis > 0)
	{
		write(1, "0", 1);
		my_struct->length++;
		precis--;
	}
}

int		ft_calc_width(t_print_flags *my_struct, int num_len)
{
	int width;

	width = my_struct->width;
	if (my_struct->flag_zero && !my_struct->flag_minus)
		my_struct->width_symbol = '0';
	width = width - num_len;
	if (my_struct->type == 'p')
		width = width - 2;
	if (my_struct->less_zero)
		width--;
	return (width);
}

int		ft_calc_precis(t_print_flags *my_struct, int num_len, int *width)
{
	int precis;

	precis = my_struct->precis - num_len;
	my_struct->width_symbol = ' ';
	if (precis > 0)
		*width = *width - precis;
	return (precis);
}
