/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferreir <sferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 09:50:27 by sferreir          #+#    #+#             */
/*   Updated: 2019/10/07 10:52:45 by sferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*nxt;
	t_list	*list;

	list = *alst;
	while (list)
	{
		nxt = list->next;
		del(list->content, list->content_size);
		free(list);
		list = nxt;
	}
	*alst = NULL;
}
