/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 19:34:48 by tschlege          #+#    #+#             */
/*   Updated: 2021/12/03 11:23:24 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_wati_parsing(char c, va_list params, int *len)
{
	if (c == 'c')
		ft_putchar_fd(va_arg(params, int), 1, len); // je comprends pas pourquoi il faut un int a tout pris
	else if (c == 's')
		ft_putstr_fd(va_arg(params, char *), 1, len);
	// else if ('p')
		// printf("%p", va_arg(params, unsigned long long int));
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

int	main(void)
{
	printf("\n%d\n", ft_printf("la lettre :%c et %c\n %%, %s 4 = %d, f= %x F= %X", 'u', 'e', "Wati", 4, 15, 15));
}
