/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 15:33:31 by tschlege          #+#    #+#             */
/*   Updated: 2021/12/07 16:10:02 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_fd(char	*s, int fd, int *len)
{
	int	i;

	if (!s)
	{
		write(1, "(null)", 6);
		*len += 6;
		return ;
	}
	i = 0;
	while (s[i])
	{
		write(fd, &(s[i]), 1);
		*len += 1;
		i++;
	}
}
