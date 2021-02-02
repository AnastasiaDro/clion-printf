/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_width_precis.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerebus <cerebus@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 22:09:46 by cerebus           #+#    #+#             */
/*   Updated: 2021/02/02 22:12:45 by cerebus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "get_width_precis.h"

void    ft_make_string_clear(char **str)
{
	char *tmp;

	tmp = *str;
	*str = NULL;
	free(tmp);
}

int		ft_get_width(va_list *v_list, char **p,	t_print_flags *my_struct)
{
	char	*num_string;

	num_string = NULL;
	if (**p == '*')
	{
		(*p)++;
		my_struct->width = va_arg(*v_list, int);
		if (my_struct->width < 0)
		{
			my_struct->width = my_struct->width * (-1);
			my_struct->flag_minus = 1;
		}
	}
	else
	{
		num_string = ft_num_for_sruct(p);
		if (num_string)
			my_struct->width = ft_atoi(num_string);
		ft_make_string_clear(&num_string);
	}
	return (my_struct->width);
}

int		ft_get_precis(va_list *v_list, char **p, t_print_flags *my_struct)
{
	char *num_string;

	if (**p == '.')
	{
		(*p)++;
		my_struct->dot = 1;
		if (**p == '*')
		{
			(*p)++;
			my_struct->precis = va_arg(*v_list, int);
			if (my_struct->precis < 0)
			{
				my_struct->precis = 0;
				my_struct->dot = 0;
				return (0);
			}
			else
				my_struct->flag_zero = 0;
		}
		else
		{
			my_struct->flag_zero = 0;
			if ((num_string = ft_num_for_sruct(p)))
				my_struct->precis = ft_atoi(num_string);
			ft_make_string_clear(&num_string);
		}
	}
	return (my_struct->precis);
}


char	*ft_num_for_sruct(char **p)
{
	char	*tmp;
	char	*num_string;
	int		str_len;
	int		i;

	i = 0;
	str_len = 10;
	if (!(num_string = ft_calloc(str_len + 1, sizeof(char))))
		return (NULL);
	while ((**p) >= '0' && (**p) <= '9')
	{
		if (i > str_len)
		{
			str_len = str_len + 10;
			tmp = num_string;
			num_string = ft_calloc(str_len + 1, sizeof(char));
			ft_strlcpy(num_string, tmp, str_len);
			free(tmp);
			tmp = NULL;
		}
		num_string[i] = **p;
		(*p)++;
		i++;
	}
	return (num_string);
}