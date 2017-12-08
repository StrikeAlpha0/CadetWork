/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <mauricesharpe06@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 14:12:48 by msharpe           #+#    #+#             */
/*   Updated: 2017/12/08 00:19:09 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*ptr2;
	size_t			i;

	i = -1;
	ptr = (unsigned char *)dest;
	ptr2 = (unsigned char *)src;
	if (ptr == ptr2 || n == 0)
		return (NULL);
	while (++i < n && ptr2[i] != '\0')
	{
		*(ptr + i) = *(ptr2 + i);
		if (*(ptr2 + i) == (unsigned char)c)
			return ((ptr + i + 1));
	}
	return (NULL);
}
