/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-h <acosta-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 22:14:11 by acosta-h          #+#    #+#             */
/*   Updated: 2023/08/16 22:14:50 by acosta-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexa(unsigned int nbr, long int *z, int loworup)
{
	if (nbr >= 16)
		ft_puthexa(nbr / 16, z, loworup);
	if (loworup)
		ft_putchar(HEX_UPPER[nbr % 16], z);
	else
		ft_putchar(HEX_LOWER[nbr % 16], z);
}
