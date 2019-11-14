/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_and_replace.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferreir <sferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 10:11:30 by sferreir          #+#    #+#             */
/*   Updated: 2019/10/14 09:18:21 by sferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_search_and_replace(char *str, char a, char b)
{
	int		i;
	char	*ret;

	i = 0;
	if (!(ret = (char*)malloc(ft_strlen(str))))
		return (NULL);
	while (str[i] == '\0')
	{
		if (str[i] == a)
			ret[i] = b;
		else
			ret[i] = str[i];
		i++;
	}
	return (ret);
}
