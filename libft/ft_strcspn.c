/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferreir <sferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:45:35 by sferreir          #+#    #+#             */
/*   Updated: 2019/10/10 13:10:45 by sferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t		i;
	size_t		x;

	i = 0;
	x = 0;
	while (s[i])
	{
		x = 0;
		while (reject[x])
		{
			if (reject[x] == s[i])
				return (i);
			x++;
		}
		i++;
	}
	return (i);
}
