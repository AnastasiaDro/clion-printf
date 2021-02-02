/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_width_precis.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerebus <cerebus@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 22:11:21 by cerebus           #+#    #+#             */
/*   Updated: 2021/02/02 22:14:13 by cerebus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef GET_WIDTH_PRECIS_H
# define GET_WIDTH_PRECIS_H
# include "ft_printf.h"

void	ft_make_string_clear(char **str);

int		ft_get_width(va_list *v_list, char **p,	t_print_flags *my_struct);

int		ft_get_precis(va_list *v_list, char **p, t_print_flags *my_struct);

char	*ft_num_for_sruct(char **p);

#endif