/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferreir <sferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 13:11:11 by sferreir          #+#    #+#             */
/*   Updated: 2019/10/03 09:14:20 by sferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		a;
	char	*x;
	char	*y;

	i = 0;
	x = (char*)haystack;
	y = (char*)needle;
	if (ft_strlen(y) == 0)
		return (x);
	while (x[i] && i < len)
	{
		a = 0;
		if (x[i] == y[a])
		{
			while (x[i + a] == y[a] && y[a] && (i + a) < len)
				a++;
		}
		if (y[a] == '\0')
			return (&x[i]);
		i++;
	}
	return (NULL);
}
