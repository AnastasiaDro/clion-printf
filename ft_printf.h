/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerebus <cerebus@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 17:41:11 by cerebus           #+#    #+#             */
/*   Updated: 2021/02/03 13:33:43 by cerebus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef	struct	s_print_flags
{
	int		length;
	int		flag_minus;
	int		flag_zero;
	int		width;
	int		precis;
	char	type;
	char	width_symbol;
	int		less_zero;
	int		dot;
}				t_print_flags;

int				ft_printf(const char *, ...);

int				ft_make_parse(t_print_flags *my_struct, va_list *v_list);

int				ft_print_percent(t_print_flags *my_struct);

int				ft_print_char(t_print_flags *my_struct, va_list *v_list);

int				ft_print_string(t_print_flags *my_struct, va_list *v_list);

t_print_flags	*ft_create_struct();

void			ft_just_print(char **p, int *res_len);

int				ft_fill_struct(t_print_flags *my_struct,
					int length, char **p, va_list *v_list);

char			*ft_get_x_num_str(int x_num, int num_cap, char *base);

#endif
