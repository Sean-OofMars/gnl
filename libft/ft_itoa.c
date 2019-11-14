/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferreir <sferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 14:05:02 by sferreir          #+#    #+#             */
/*   Updated: 2019/10/07 08:34:26 by sferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

static size_t	length(int n)
{
	size_t	c;

	c = 0;
	if (n < 0)
	{
		c++;
		n = n * -1;
	}
	else if (n == 0)
		c++;
	while (n > 0)
	{
		c++;
		n = n / 10;
	}
	c++;
	return (c);
}

char			*ft_itoa(int n)
{
	char	*ret;
	size_t	l;

	l = length(n);
	if (!(ret = (char*)malloc(l)))
		return (NULL);
	ret[l - 1] = '\0';
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		ret[0] = '0';
	if (n < 0)
	{
		ret[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		ret[l - 2] = ((n % 10) + '0');
		n = n / 10;
		l--;
	}
	return (ret);
}
