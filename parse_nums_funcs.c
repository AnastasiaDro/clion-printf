/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_nums_funcs.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerebus <cerebus@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 19:58:58 by cerebus           #+#    #+#             */
/*   Updated: 2021/02/03 12:42:36 by cerebus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "num_utils.h"
#include "print_utils.h"

int	ft_parse_int(t_print_flags *my_struct, va_list *v_list)
{
	int		num_len;
	int		print_num;
	char	*num_string;

	print_num = va_arg(*v_list, int);
	if (print_num < 0)
	{
		my_struct->less_zero = 1;
		print_num = print_num * (-1);
	}
	num_len = ft_get_capacity((unsigned int)print_num, 10);
	num_string = ft_int_get_s(print_num, num_len, my_struct->type);
	ft_print(my_struct, num_len, num_string);
	free(num_string);
	num_string = NULL;
	return (my_struct->length);
}

int	ft_parse_xx(t_print_flags *my_struct, va_list *v_list)
{
	unsigned int	print_num;
	int				num_len;
	char			*x_num_string;

	print_num = va_arg(*v_list, unsigned int);
	num_len = ft_get_capacity(print_num, 16);
	x_num_string = ft_get_unsign_s(print_num, num_len, my_struct);
	ft_print(my_struct, num_len, x_num_string);
	free(x_num_string);
	x_num_string = NULL;
	return (my_struct->length);
}

int	ft_parse_u(t_print_flags *my_struct, va_list *v_list)
{
	unsigned int	print_num;
	int				num_len;
	char			*num_string;

	print_num = va_arg(*v_list, unsigned int);
	num_len = ft_get_capacity(print_num, 10);
	num_string = ft_get_unsign_s(print_num, num_len, my_struct);
	ft_print(my_struct, num_len, num_string);
	free(num_string);
	num_string = NULL;
	return (my_struct->length);
}

int	ft_parse_pointer(t_print_flags *my_struct, va_list *v_list)
{
	unsigned long int	print_ptr;
	int					num_len;
	char				*p_string;

	print_ptr = (unsigned long int)va_arg(*v_list, void *);
	num_len = ft_get_capacity(print_ptr, 16);
	p_string = ft_get_unsign_s(print_ptr, num_len, my_struct);
	ft_print(my_struct, num_len, p_string);
	free(p_string);
	p_string = NULL;
	return (my_struct->length);
}
