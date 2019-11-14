/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 14:33:35 by sferreir          #+#    #+#             */
/*   Updated: 2019/09/25 10:29:54 by sferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	t;
	int		i;
	char	*ret;

	t = ft_strlen(s1) + ft_strlen(s2) + 1;
	i = 0;
	ret = (char*)malloc(t);
	if (ret == NULL)
		return (NULL);
	ft_strcpy(ret, s1);
	ft_strcat(ret, s2);
	return (ret);
}
