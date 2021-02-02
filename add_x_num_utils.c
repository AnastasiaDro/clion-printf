/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_x_num_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerebus <cerebus@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 23:03:14 by cerebus           #+#    #+#             */
/*   Updated: 2021/02/02 23:12:29 by cerebus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "num_utils.h"
#include "add_x_num_utils.h"

char	ft_convert_to_x(unsigned int n, char *base)
{
	char res;

	if (n < 10)
		res = n + '0';
	else
		res = base[n - 10];
	return (res);
}

char	*get_base(char type)
{
	char *base;

	if (type == 'X')
		base = "ABCDEF";
	else
		base = "abcdef";
	return (base);
}

void	ft_fill_x_s(char **s, unsigned long num,
				int num_cap, t_print_flags *my_struct)
{
	unsigned long	divis;
	int				num_sys;
	char			*base;
	int				limit;

	limit = 0;
	if (my_struct->type == 'p')
		if (ft_add_0x(s, num, &limit, my_struct))
			return ;
	num_sys = ft_get_num_syst(my_struct->type, &base);
	if (num == 0)
		(*s)[0] = '0';
	while (num_cap > limit)
	{
		divis = num % num_sys;
		(*s)[num_cap - 1] = ft_convert_to_x(divis, base);
		num = num / num_sys;
		num_cap--;
	}
}

int		ft_add_0x(char **s, unsigned long num,
				int *limit, t_print_flags *my_struct)
{
	(*s)[0] = '0';
	(*s)[1] = 'x';
	*limit = 2;
	if (num == 0 && my_struct->dot)
	{
		my_struct->width = my_struct->width - 2;
		return (1);
	}
	return (0);
}
