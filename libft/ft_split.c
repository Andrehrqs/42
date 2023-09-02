/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-h <acosta-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 21:32:05 by acosta-h          #+#    #+#             */
/*   Updated: 2023/05/12 16:50:08 by acosta-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(char *str, char charset)
{
	int	i;
	int	word_count;

	i = 0;
	word_count = 0;
	while (str[i] != '\0')
	{
		while (str[i] && str[i] == charset)
			i++;
		if (str[i] != '\0')
			word_count++;
		while (str[i] != '\0' && str[i] != charset)
			i++;
	}
	return (word_count);
}

static int	ft_wordlen(char *str, char charset)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != charset)
		i++;
	return (i);
}

static char	*ft_word(char *str, char charset)
{
	int		len_word;
	int		i;
	char	*word;

	i = 0;
	len_word = ft_wordlen(str, charset);
	word = (char *)malloc(sizeof(char) * (len_word + 1));
	while (i < len_word)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		i;
	int		j;

	i = 0;
	j = 0;
	strings = (char **)malloc(sizeof(char *) * (ft_word_count((char *)s, c)
				+ 1));
	if (!s || !strings)
		return (0);
	while (s[j] != '\0')
	{
		while (s[j] != '\0' && s[j] == c)
			j++;
		if (s[j] != '\0')
		{
			strings[i] = ft_word((char *)&s[j], c);
			i++;
		}
		while (s[j] != '\0' && s[j] != c)
			j++;
	}
	strings[i] = 0;
	return (strings);
}
