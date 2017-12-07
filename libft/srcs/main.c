/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 15:13:48 by msharpe           #+#    #+#             */
/*   Updated: 2017/12/06 22:29:55 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"


//FT_MEMMOVE
/*
int main ()
{
	char str[20] = "wubwubwub@5pm";
	char stri[20] = "098765";
	char str2[20] = "wubwubwub@5pm";
	char str2i[20] = "098765";

	printf("%s\n", str);	
	memmove(str + 2, stri, 4);
	printf("%s\n", str);
	printf("%s\n", str2);
	ft_memmove(str2 + 2, str2i, 4);
	printf("%s\n", str2);
	return (0);
}
*/
//FT_MEMCCPY
/*
int		main()
{
	char answer[61];
	char trueans[61];
	char *dest;
	char *truedest;
	char test[60] = "Well then I guess there should be a lot of ways to do this?";
	//22 chars to R
	dest = ft_memccpy(answer, test, 'r', 60);
	*dest = '\0';
	truedest = memccpy(trueans, test, 'r', 60);
	*truedest = '\0';
	printf("%s\n", answer);
	printf("%s\n", trueans);
	return (0);
}
*/
//FT_STRSPLIT

int		main()
{
		char *s1 = "                  olol";
			char **r1 = ft_strsplit(s1, ' ');
				char *s2 = "      split       this for   me  !       ";

					char **r2 = ft_strsplit(s2, ' ');
						char *s3 = "0 0 0 0 0 0 0 0 0";
							char **r3 = ft_strsplit(s3, ' ');
	char **arr;
	char str[50] = "      split       this   for  me     !   ";
	arr = ft_strsplit(str, ' ');
	printf("%s\n%s\n%s\n%s\n%s\n",arr[0], arr[1], arr[2], arr[3], arr[4]);
	return (0);
}

//FT_LSTNEW
/*
int main()
{
	t_list* item = ft_lstnew("42 bruhbruhbruh", 16);
	printf("%s\n", (void *)item->content);
	printf("%zu\n", (item->content_size));
	printf("%p\n", (item->next));
}
*/

//FT_STRJOIN
/*
int	main()
{
	char s1[50] = "huehuehue";
	char s2[50] = "jajajajaja";
	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}
*/
