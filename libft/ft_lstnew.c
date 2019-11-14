/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferreir <sferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 12:31:13 by sferreir          #+#    #+#             */
/*   Updated: 2019/09/30 13:46:36 by sferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	new = (t_list*)malloc(sizeof(t_list));
	if (!new)
	{
		return (NULL);
	}
	if (!content)
	{
		content = NULL;
		content_size = 0;
	}
	else
	{
		new->content = malloc(content_size);
		if (content_size == 0)
		{
			free(new);
			return (NULL);
		}
		new->content_size = content_size;
		ft_memcpy(new->content, content, content_size);
	}
	new->next = NULL;
	return (new);
}
