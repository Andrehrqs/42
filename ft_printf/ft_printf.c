/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-h <acosta-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 22:14:25 by acosta-h          #+#    #+#             */
/*   Updated: 2023/08/26 21:18:35 by acosta-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_options(char *str, va_list args, int i, long int *z)
{
	if (str[i] == 'c')
		ft_putchar(va_arg(args, int), z);
	else if (str[i] == 's')
		ft_putstr(va_arg(args, char *), z);
	else if (str[i] == 'p')
		ft_putadd(va_arg(args, unsigned long int), z, 0);
	else if (str[i] == 'd' || str[i] == 'i')
		ft_putnbr(va_arg(args, int), z);
	else if (str[i] == 'u')
		ft_unsgint(va_arg(args, unsigned int), z);
	else if (str[i] == 'x')
		ft_puthexa(va_arg(args, unsigned int), z, 0);
	else if (str[i] == 'X')
		ft_puthexa(va_arg(args, unsigned int), z, 1);
	else if (str[i] == '%')
		ft_putchar('%', z);
}

int	ft_printf(const char *str, ...)
{
	va_list		args;
	long int	i;
	long int	z;

	i = 0;
	z = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
			ft_options((char *)str, args, ++i, &z);
		else
			ft_putchar(str[i], &z);
		i++;
	}
	va_end(args);
	return (z);
}
