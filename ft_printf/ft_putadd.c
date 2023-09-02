/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-h <acosta-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 22:14:18 by acosta-h          #+#    #+#             */
/*   Updated: 2023/08/26 21:21:14 by acosta-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putadd(unsigned long int nbr, long int *z, int x)
{
	if (!nbr)
	{
		ft_putstr("(nil)", z);
		return ;
	}
	if (x == 0)
		ft_putstr("0x", z);
	if (nbr >= 16)
		ft_putadd((nbr / 16), z, ++x);
	ft_putchar(HEX_LOWER[nbr % 16], z);
}

// 0x corresponde a um endereco de memor hex