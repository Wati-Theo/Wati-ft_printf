/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 19:34:48 by tschlege          #+#    #+#             */
/*   Updated: 2021/11/30 19:43:16 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_printf(const char *str, ...)
{
	va_list	jul;

	va_start(jul ,str);

	printf("%d\n", va_arg(jul, int));
	printf("%d\n", va_arg(jul, int));
	va_end(jul);
}

int	main()
{
	ft_printf("%s", 51, 64);
}
