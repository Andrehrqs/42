/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-h <acosta-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 22:14:04 by acosta-h          #+#    #+#             */
/*   Updated: 2023/08/16 22:14:48 by acosta-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, long int *z)
{
	int	i;

	i = -1;
	if (!str)
	{
		ft_putstr("(null)", z);
		return ;
	}
	while (str[++i])
		ft_putchar(str[i], z);
}
