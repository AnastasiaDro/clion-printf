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
#include <stdio.h>

int ft_printf(const char *format_str, ...)
{
	va_list v_list;
	int 	res_len;
	//указатель для перемещения по строке
	char *p;
	//структура
	t_print_flags *print_struct;

	va_start(v_list, format_str);
	res_len = 0;
	p = (char *)format_str;
	while(*p)
	{
		if(*p == '%' && *(p++) != '\0')
		{
			print_struct = ft_create_struct();
			ft_fill_struct(print_struct, res_len, &p);
			//printf("\nstruct width %d\n", print_struct->width);
			//printf("struct precis %d\n", print_struct->precis);
			res_len = ft_make_parse(print_struct, &v_list, &res_len);
		}
		else
		{ 
		ft_putchar_fd(*p, 1);
		res_len++;
		p++;
		}
	}

	//закончили с аргументами
	va_end(v_list);
	return 0;
}