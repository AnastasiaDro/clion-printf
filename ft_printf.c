/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerebus <cerebus@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 23:32:25 by cerebus           #+#    #+#             */
/*   Updated: 2021/01/14 23:49:28 by cerebus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format_str, ...)
{
	va_list			v_list;
	int				res_len;
	char			*p;
	t_print_flags	*print_struct;

	print_struct = NULL;
	va_start(v_list, format_str);
	res_len = 0;
	p = (char *)format_str;
	while (*p)
	{
		if (*p == '%' && *(p++) != '\0')
		{
			print_struct = ft_create_struct();
			ft_fill_struct(print_struct, res_len, &p, &v_list);
			res_len = ft_make_parse(print_struct, &v_list);
			free(print_struct);
		}
		else
			ft_just_print(&p, &res_len);
	}
	va_end(v_list);
	return (res_len);
}
