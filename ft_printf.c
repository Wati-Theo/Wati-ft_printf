/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 19:34:48 by tschlege          #+#    #+#             */
/*   Updated: 2021/12/03 14:46:19 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_wati_parsing(char c, va_list params, int *len)
{
	char	*s;

	s = "e";
	if (c == 'c')
		ft_putchar_fd(va_arg(params, int), 1, len);
	else if (c == 's')
	{
		s = va_arg(params, char *);
		if (s)
			ft_putstr_fd(s, 1, len);
		else
			ft_putstr_fd("(null)", 1, len);
	}
	else if (c == 'p')
	{
		ft_putstr_fd("0x", 1, len);
		ft_putaddress_fd(va_arg(params, unsigned long long int), 1, len);
	}
	else if (c == 'd')
		ft_putnbr_fd(va_arg(params, int), 1, len);
	else if (c == 'i')
		ft_putnbr_fd(va_arg(params, int), 1, len);
	else if (c == 'u')
		ft_putunsgnbr_fd(va_arg(params, unsigned int), 1, len);
	else if (c == 'x')
		ft_puthex_fd(va_arg(params, unsigned int), 1, len, 1);
	else if (c == 'X')
		ft_puthex_fd(va_arg(params, unsigned int), 1, len, 2);
}

int	ft_printf(const char *str, ...)
{
	int		len;
	int		i;
	va_list	params;

	len = 0;
	i = 0;
	va_start(params, str);
	while (str[i])
	{
		if (str[i] != '%')
			ft_putchar_fd(str[i], 1, &len);
		if (str[i] == '%')
		{
			if (str[i + 1] == '%')
				ft_putchar_fd('%', 1, &len);
			else
				ft_wati_parsing(str[i + 1], params, &len);
			i++;
		}
		i++;
	}
	va_end(params);
	return (len);
}

