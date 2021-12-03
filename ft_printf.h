/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 19:28:30 by tschlege          #+#    #+#             */
/*   Updated: 2021/12/03 14:48:32 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <assert.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
void	ft_putchar_fd(char c, int fd, int *len);
void	ft_putstr_fd(char	*s, int fd, int *len);
void	ft_putnbr_fd(int n, int fd, int *len);
void	ft_putunsgnbr_fd(unsigned int n, int fd, int *len);
void	ft_puthex_fd(unsigned int n, int fd, int *len, int choice);
void	ft_putaddress_fd(unsigned long long int n, int fd, int *len);

#endif
