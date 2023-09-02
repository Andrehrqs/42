/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-h <acosta-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 22:14:22 by acosta-h          #+#    #+#             */
/*   Updated: 2023/08/28 11:45:03 by acosta-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// evita a inclusão múltipla
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

// são definidas duas strings usadas ao imprimir valores em formato hexadecimal
# define HEX_UPPER "0123456789ABCDEF"
# define HEX_LOWER "0123456789abcdef"

int		ft_printf(const char *str, ...);
void	ft_options(char *str, va_list args, int i, long int *z);
void	ft_putchar(char c, long int *z);
void	ft_puthexa(unsigned int nbr, long int *z, int uporlow);
void	ft_putadd(unsigned long int nbr, long int *z, int x);
void	ft_putnbr(int nbr, long int *z);
void	ft_putstr(char *str, long int *z);
void	ft_unsgint(unsigned int nbr, long int *z);
#endif
