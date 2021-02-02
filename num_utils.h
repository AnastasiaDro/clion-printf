/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_utils.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerebus <cerebus@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 16:54:32 by cerebus           #+#    #+#             */
/*   Updated: 2021/02/02 23:37:20 by cerebus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NUM_UTILS_H
# define NUM_UTILS_H
# include "ft_printf.h"

int		ft_get_capacity(unsigned long int n, int base);

int		ft_get_num_syst(char type, char **base);

void	ft_fill_int_s(char **s, unsigned int num, char type, int num_cap);

char	*ft_int_get_s(int num, int num_cap, char type);

char	*ft_get_unsign_s(unsigned long int num,
				int num_cap, t_print_flags *my_struct);

#endif
