/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferreir <sferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 12:23:50 by sferreir          #+#    #+#             */
/*   Updated: 2019/10/07 11:06:07 by sferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*nxt;
	t_list	*ret;

	if (!(ret = (t_list*)malloc(sizeof(lst))))
		return (NULL);
	ret = f(lst);
	if (ret == NULL)
		return (NULL);
	nxt = ret;
	while (lst->next)
	{
		lst = lst->next;
		nxt->next = f(lst);
		if (ret->next == NULL)
			return (NULL);
		nxt = nxt->next;
	}
	return (ret);
}
