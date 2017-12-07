/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <mauricesharpe06@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 14:23:55 by msharpe           #+#    #+#             */
/*   Updated: 2017/12/05 23:02:29 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ptr1;
	char	*ptr2;

	ptr1 = dest;
	ptr2 = (char *)src;
	if (src < dest)
	{
		i = n;
		while (--i > 0)
			ptr1[i] = ptr2[i];
		ptr1[i] = ptr2[i];
		dest = ptr1;
		return (dest);
	}
	else
	{
		i = -1;
		while (++i < n)
			ptr1[i] = ptr2[i];
		dest = ptr1;
		return (dest);
	}
}
