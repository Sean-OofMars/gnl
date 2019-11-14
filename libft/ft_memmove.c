/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferreir <sferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 14:41:47 by sferreir          #+#    #+#             */
/*   Updated: 2019/10/07 09:13:04 by sferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*xdest;
	unsigned char		*xsrc;

	xdest = (unsigned char*)dst;
	xsrc = (unsigned char*)src;
	if (xsrc == xdest)
		return (dst);
	if (xsrc < xdest)
	{
		xsrc = (unsigned char*)src + len - 1;
		xdest = dst + len - 1;
		while (len--)
			*xdest-- = *xsrc--;
	}
	else
	{
		while (len--)
			*xdest++ = *xsrc++;
	}
	return (dst);
}
