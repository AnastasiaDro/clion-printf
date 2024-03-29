/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerebus <cerebus@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 23:48:21 by cerebus           #+#    #+#             */
/*   Updated: 2021/02/03 14:13:40 by cerebus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "print_utils.h"
#include "print_width_precis.h"

void	ft_print_minus(t_print_flags *my_struct)
{
	write(1, "-", 1);
	my_struct->length++;
}

void	ft_print_right_align(t_print_flags *my_struct,
			char *num_string, int width, int precis)
{
	if (my_struct->width_symbol == '0')
	{
		if (my_struct->less_zero)
			ft_print_minus(my_struct);
		ft_print_width(my_struct, width);
	}
	else
	{
		ft_print_width(my_struct, width);
		if (my_struct->less_zero)
			ft_print_minus(my_struct);
	}
	ft_print_precis(my_struct, precis);
	my_struct->length = my_struct->length +
			ft_putstr_printf(num_string, 0, my_struct);
}

void	ft_print_left_align(t_print_flags *my_struct,
			char *num_string, int width, int precis)
{
	if (my_struct->less_zero)
		ft_print_minus(my_struct);
	ft_print_precis(my_struct, precis);
	my_struct->length = my_struct->length +
			ft_putstr_printf(num_string, 0, my_struct);
	ft_print_width(my_struct, width);
}

int		ft_print(t_print_flags *my_struct, int num_len, char *num_string)
{
	int		width;
	int		precis;

	width = 0;
	precis = 0;
	if (my_struct->width)
	{
		if (my_struct->dot && !my_struct->precis &&
				*num_string == '0' && num_len == 1)
			width = my_struct->width;
		else
			width = ft_calc_width(my_struct, num_len);
	}
	if (my_struct->precis)
		precis = ft_calc_precis(my_struct, num_len, &width);
	if (!(my_struct->flag_minus))
		ft_print_right_align(my_struct, num_string, width, precis);
	else
		ft_print_left_align(my_struct, num_string, width, precis);
	return (1);
}

int		ft_putstr_printf(char *s, int precis, t_print_flags *my_struct)
{
	int str_len;

	str_len = 0;
	if (my_struct->type == 's')
		str_len = precis;
	else
	{
		str_len = ft_strlen(s);
		if (my_struct->dot && !my_struct->precis && str_len == 1 && s[0] == '0')
			return (0);
	}
	if (s)
		write(1, s, str_len);
	return (str_len);
}
