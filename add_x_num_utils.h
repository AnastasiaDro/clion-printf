/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_x_num_utils.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerebus <cerebus@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 23:01:47 by cerebus           #+#    #+#             */
/*   Updated: 2021/02/02 23:08:26 by cerebus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_fill_x_s(char **s, unsigned long num, int num_cap, t_print_flags *my_struct);
char	ft_convert_to_x(unsigned int n, char *base);
char	*get_base(char type);
int 	ft_add_0x(char **s, unsigned long num, int *limit, t_print_flags *my_struct);