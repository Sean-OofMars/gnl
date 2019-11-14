/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferreir <sferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 10:16:20 by sferreir          #+#    #+#             */
/*   Updated: 2019/10/03 13:27:29 by sferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strnew(size_t size)
{
	char	*ret;
	size_t	i;

	i = 0;
	if (!(ret = (char*)malloc(size + 1)))
		return (NULL);
	while (i != size + 1)
	{
		ret[i] = '\0';
		i++;
	}
	return (ret);
}
