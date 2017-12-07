/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 13:54:13 by msharpe           #+#    #+#             */
/*   Updated: 2017/12/06 18:52:33 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*action;
	t_list	*newlst;

	newlst = f(lst);
	action = newlst;
	if (!lst)
		return (NULL);
	while (lst != (NULL))
	{
		lst = lst->next;
		if (!(newlst->next = f(lst)))
			return (NULL);
		else
			newlst = newlst->next;
	}
	return (action);
}
