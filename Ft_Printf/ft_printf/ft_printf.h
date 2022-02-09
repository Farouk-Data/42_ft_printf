/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 21:38:48 by fech-cha          #+#    #+#             */
/*   Updated: 2021/12/24 22:13:31 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int	ft_printf(const char *, ...);
int	ft_putchar(char c);
int	ft_putnbr(int nb);
int	ft_putstr(char *str);
int ft_print_unsigned(unsigned int n);
int ft_print_lower_hexa(long unsigned int nb);
int ft_print_upper_hexa(unsigned int nb);
int ft_print_addrs(long unsigned int nb);

#endif
