/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsgint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-h <acosta-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 22:13:52 by acosta-h          #+#    #+#             */
/*   Updated: 2023/08/16 22:14:46 by acosta-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unsgint(unsigned int nbr, long int *z)
{
	if (nbr > 9)
	{
		ft_unsgint(nbr / 10, z);
		ft_unsgint(nbr % 10, z);
	}
	else
		ft_putchar(nbr + '0', z);
}
