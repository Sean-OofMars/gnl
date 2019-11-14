/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferreir <sferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 13:11:11 by sferreir          #+#    #+#             */
/*   Updated: 2019/10/03 09:00:38 by sferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		a;
	char	*x;
	char	*y;

	i = 0;
	x = (char*)haystack;
	y = (char*)needle;
	if (ft_strlen(y) == 0)
		return (x);
	while (x[i])
	{
		a = 0;
		if (x[i] == y[a])
		{
			while (x[i + a] == y[a] && y[a])
				a++;
		}
		if (y[a] == '\0')
			return (&x[i]);
		i++;
	}
	return (NULL);
}
