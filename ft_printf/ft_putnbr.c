/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-h <acosta-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 22:14:08 by acosta-h          #+#    #+#             */
/*   Updated: 2023/08/16 22:14:49 by acosta-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nbr, long int *z)
{
	if (nbr == -2147483648)
	{
		ft_putstr("-2147483648", z);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-', z);
		nbr = -nbr;
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10, z);
		ft_putnbr(nbr % 10, z);
	}
	else
		ft_putchar(nbr + '0', z);
}
