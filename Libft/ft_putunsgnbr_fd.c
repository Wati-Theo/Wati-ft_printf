/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsgnbr_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 16:49:09 by tschlege          #+#    #+#             */
/*   Updated: 2021/12/02 17:18:43 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putunsgnbr_fd(unsigned int n, int fd, int *len)
{
	if (n > 9)
		ft_putunsgnbr_fd(n / 10, fd, len);
	ft_putchar_fd((n % 10) + '0', fd, len);
}
