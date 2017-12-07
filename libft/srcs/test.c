/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 21:42:12 by msharpe           #+#    #+#             */
/*   Updated: 2017/12/06 21:55:49 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**test(void)
{
	char	**ret = (char*[2]){"olol", NULL};
	char	**head;
	char *s = "                  olol";
	char **r = ft_strsplit(s, ' ');

	head = ret;
	while (*r)
	{
		if (strcmp(*r, *ret))
		{
			return (0);
		}
		r++;
		ret++;
	}
	return (head);
}

int	main(void)
{
	char **ret;

	ret = test();
	printf("%s\n", ret[0]);
}
