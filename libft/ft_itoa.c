/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-h <acosta-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:59:01 by acosta-h          #+#    #+#             */
/*   Updated: 2023/05/12 16:50:49 by acosta-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(long int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len = 1;
	else if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*ft_num(int long nb, int i)
{
	char	*num;

	num = (char *)malloc(i + 1);
	if (!num)
		return (NULL);
	num[i--] = '\0';
	if (nb == 0)
		num[0] = '0';
	else if (nb < 0)
	{
		num[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		num[i--] = '0' + (nb % 10);
		nb /= 10;
	}
	return (num);
}

char	*ft_itoa(int n)
{
	long int	nb;
	size_t		i;
	char		*num;

	nb = n;
	i = ft_len(nb);
	num = ft_num(n, i);
	return (num);
}
