/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 11:02:21 by sferreir          #+#    #+#             */
/*   Updated: 2019/09/25 09:43:53 by sferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *src, int c, size_t n)
{
	size_t		i;
	char		*xsrc;
	void		*p;

	xsrc = (char*)src;
	i = 0;
	while (i < n)
	{
		if (xsrc[i] == c)
		{
			p = &xsrc[i];
			return (p);
		}
		i++;
	}
	return (NULL);
}
