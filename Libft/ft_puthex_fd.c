/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putHEX_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 11:04:44 by tschlege          #+#    #+#             */
/*   Updated: 2021/12/03 11:10:43 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puthex_fd(unsigned int n, int fd, int *len, int choice)
{
	char	*base1;
	char	*base2;

	base1 = "0123456789abcdef";
	base2 = "0123456789ABCDEF";
	if (n > 15)
		ft_puthex_fd(n / 16, fd, len, choice);
	if (choice == 1)
		ft_putchar_fd(base1[n % 16], fd, len);
	else if (choice == 2)
		ft_putchar_fd(base2[n % 16], fd, len);
}
