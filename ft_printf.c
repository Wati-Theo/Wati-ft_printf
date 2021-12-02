/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 19:34:48 by tschlege          #+#    #+#             */
/*   Updated: 2021/12/02 13:27:33 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_wati_parsing(char c, va_list params, int *len)
{
	if (c == 'c')
		ft_putchar_fd(va_arg(params, char), 1, &len);
	else if (c == 's')
		printf("%s", va_arg(params, char *));
	else if ('p')
		printf("%p", va_arg(params, unsigned long long int));
	else if (c == 'd')
		printf("%d", va_arg(params, int));
	else if (c == 'i')
		printf("%i", va_arg(params, int));
	else if (c == 'u')
		printf("%u", va_arg(params, unsigned int));
	else if (c == 'x')
		printf("%x", va_arg(params, unsigned int));
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
			ft_wati_parsing(str[i + 1], params, &len);
			i++;
		}
		i++;
	}
	va_end(params);
}

int	main(void)
{
	ft_printf("la lettre :%c et %c\n", 'u', 'e');
}
