/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferreir <sferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 11:31:59 by sferreir          #+#    #+#             */
/*   Updated: 2019/10/03 13:50:03 by sferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*p;

	i = 0;
	if (!(p = ft_strnew(ft_strlen(s))))
		return (NULL);
	if (s && f)
	{
		while (s[i] != '\0')
		{
			p[i] = f(i, s[i]);
			i++;
		}
		return (p);
	}
	else
		return (NULL);
}
