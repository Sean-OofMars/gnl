/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 08:51:01 by sferreir          #+#    #+#             */
/*   Updated: 2019/09/30 09:04:51 by sferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <string.h>

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*p;

	p = *alst;
	del(p->content, p->content_size);
	free(*alst);
	*alst = NULL;
}
