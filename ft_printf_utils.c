/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerebus <cerebus@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 16:54:32 by cerebus           #+#    #+#             */
/*   Updated: 2021/02/02 19:41:03 by cerebus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "get_width_precis.h"

t_print_flags	*ft_create_struct(void)
{
	t_print_flags *my_struct;

	my_struct = (t_print_flags *)malloc(sizeof(t_print_flags));
	if (!my_struct)
		return (NULL);
	my_struct->length = 0;
	my_struct->flag_minus = 0;
	my_struct->flag_zero = 0;
	my_struct->width = 0;
	my_struct->precis = 0;
	my_struct->type = 0;
	my_struct->width_symbol = ' ';
	my_struct->less_zero = 0;
	my_struct->dot = 0;
	return (my_struct);
}

int				ft_fill_struct(t_print_flags *my_struct,
						int length, char **p, va_list *v_list)
{
	int flag_space;

	flag_space = 0;
	while (**p == '0' || **p == '-' || **p == ' ')
	{
		if (**p == '0' && my_struct->flag_zero == 0
				&& my_struct->flag_minus == 0)
			my_struct->flag_zero = 1;
		if (**p == '-' && my_struct->flag_minus == 0)
			my_struct->flag_minus = 1;
		if (**p == ' ' && flag_space == 0)
		{
			flag_space = 1;
			write(1, " ", 1);
			length++;
		}
		(*p)++;
	}
	ft_get_width(v_list, p, my_struct);
	ft_get_precis(v_list, p, my_struct);
	my_struct->length = length;
	my_struct->type = **p;
	(*p)++;
	return (length);
}

void			ft_just_print(char **p, int *res_len)
{
	ft_putchar_fd((**p), 1);
	(*res_len)++;
	(*p)++;
}
