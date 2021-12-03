/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 11:29:17 by tschlege          #+#    #+#             */
/*   Updated: 2021/12/03 11:34:06 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putaddress_fd(unsigned long long int n, int fd, int *len)
{
	char	*base;

	base = "0123456789abcdef";
	if (n > 15)
		ft_putaddress_fd(n / 16, fd, len);
	ft_putchar_fd(base[n % 16], fd, len);
}
