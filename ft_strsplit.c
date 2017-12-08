/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <mauricesharpe06@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 15:00:56 by msharpe           #+#    #+#             */
/*   Updated: 2017/12/08 15:29:26 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_countwords(const char *str, char c)
{
	int word;
	int i;

	i = 0;
	word = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c)
			word++;
		i++;
	}
	if (word == 0)
		word++;
	return (word);
}

static char		*ft_word(const char *str, char c, int *i)
{
	char	*s;
	int		k;

	if (!(s = (char *)ft_memalloc(sizeof(char) * (ft_strlen(str) + 1))))
		return (NULL);
	k = 0;
	while (str[*i] != c && str[*i])
	{
		s[k] = str[*i];
		k++;
		*i += 1;
	}
	s[k] = 0;
	return (s);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		word;
	char	**str;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	word = ft_countwords(s, c);
	if (!(str = ft_memalloc(sizeof(char *) * (word + 1))))
		return (NULL);
	while (s[i] && j <= word)
	{
		while ((s[i] == c) && s[i])
			i++;
		while (s[i] != c && s[i])
		{
			if (j == word)
				return (str);
			str[j++] = ft_word(s, c, &i);
			i++;
		}
	}
	return (str);
}
