/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferreir <sferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 13:01:50 by sferreir          #+#    #+#             */
/*   Updated: 2019/10/10 13:17:16 by sferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t		ft_strspn(const char *str, const char *set)
{
	size_t	i;
	size_t	x;

	i = 0;
	while (str[i])
	{
		x = 0;
		while (set[x])
		{
			if (str[i] != set[x] && set[x] == '\0')
				return (i);
			x++;
		}
		i++;
	}
	return (i);
}
