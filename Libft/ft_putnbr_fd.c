/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:01:50 by tschlege          #+#    #+#             */
/*   Updated: 2021/12/02 16:43:41 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd, int *len)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		*len += 11;
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd, len);
		n = -n;
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd, len);
	ft_putchar_fd((n % 10) + '0', fd, len);
}
