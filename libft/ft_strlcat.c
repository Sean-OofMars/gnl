/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferreir <sferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 15:51:41 by sferreir          #+#    #+#             */
/*   Updated: 2019/10/07 11:33:58 by sferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		ret;
	size_t		x;
	size_t		y;

	x = 0;
	ret = 0;
	y = 0;
	while (dest[x] != '\0')
		x++;
	while (src[ret] != '\0')
		ret++;
	if (size <= x)
		ret = ret + size;
	else
		ret = ret + x;
	while (src[y] != '\0' && x + 1 < size)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (ret);
}
