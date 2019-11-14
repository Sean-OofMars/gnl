/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 10:43:14 by sferreir          #+#    #+#             */
/*   Updated: 2019/09/20 08:50:44 by sferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*p;
	char	x;
	char	*y;

	x = (char)c;
	i = 0;
	y = (char*)s;
	while (y[i] != '\0')
	{
		if (y[i] == x)
		{
			p = &y[i];
			return (p);
		}
		i++;
	}
	if (x == '\0')
	{
		p = &y[i];
		return (p);
	}
	else
		return (NULL);
}
