/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_utils.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerebus <cerebus@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 16:54:32 by cerebus           #+#    #+#             */
/*   Updated: 2021/01/28 12:45:58 by cerebus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	NUM_UTIS_H
#define		NUM_UTIS_H
	
	int		ft_get_capacity(unsigned int n, int base);

	char	*get_base(char type);

	int		ft_get_num_syst(char type, char **base);

	void	ft_fill_s(char **s, unsigned int num, char type, int num_cap);

	char	*ft_get_s(int num, int num_cap, char type);

    char	*ft_get_unsign_s(unsigned int num, int num_cap, char type);
#endif