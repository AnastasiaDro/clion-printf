/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerebus <cerebus@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 16:54:32 by cerebus           #+#    #+#             */
/*   Updated: 2021/02/02 23:09:32 by cerebus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "num_utils.h"
#include "add_x_num_utils.h"

int		ft_get_capacity(unsigned long int n, int base)
{
	unsigned long int	nm;
	int					num_cap;

	if (n < 10)
		return (1);
	nm = n;
	num_cap = 0;
	while (nm != 0)
	{
		nm = nm / base;
		num_cap++;
	}
	return (num_cap);
}

int		ft_get_num_syst(char type, char **base)
{
	int num_sys;

	if (type == 'd' || type == 'i' || type == 'u')
	{
		num_sys = 10;
		*base = NULL;
	}
	if (type == 'X' || type == 'x' || type == 'p')
	{
		num_sys = 16;
		*base = (char *)get_base(type);
	}
	return (num_sys);
}

void	ft_fill_int_s(char **s, unsigned int num, char type, int num_cap)
{
	int				num_sys;
	char			*base;
	int				limit;

	limit = 0;
	num_sys = ft_get_num_syst(type, &base);
	if (num == 0)
		(*s)[0] = '0';
	if (num == 2147483648)
	{
		ft_strlcpy(*s, "2147483648", 11);
		return ;
	}
	while (num_cap > limit)
	{
		if (num_sys == 10)
			(*s)[num_cap - 1] = num % 10 + '0';
		num = num / num_sys;
		num_cap--;
	}
}

char	*ft_int_get_s(int num, int num_cap, char type)
{
	int		size;
	char	*s;

	size = num_cap + 1;
	if (!(s = ft_calloc(size, sizeof(char))))
		return (NULL);
	if (num < 0)
		num = num * (-1);
	ft_fill_int_s(&s, num, type, num_cap);
	return (s);
}

char	*ft_get_unsign_s(unsigned long int num,
				int num_cap, t_print_flags *my_struct)
{
	int		size;
	char	*s;

	if (my_struct->type == 'p')
		num_cap = num_cap + 2;
	size = num_cap + 1;
	if (!(s = ft_calloc(size, sizeof(char))))
		return (NULL);
	ft_fill_x_s(&s, num, num_cap, my_struct);
	return (s);
}
