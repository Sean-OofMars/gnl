/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferreir <sferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 15:33:09 by sferreir          #+#    #+#             */
/*   Updated: 2019/09/30 13:40:54 by sferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	len;
	size_t	t;

	t = ft_strlen(s);
	start = 0;
	while (s[start] != '\0'
			&& (s[start] == '\t' || s[start] == '\n' || s[start] == ' '))
		start++;
	while (start < t
			&& (s[t] == ' ' || s[t] == '\t' || s[t] == '\n' || s[t] == '\0'))
		t--;
	if (start == t)
		return (ft_strnew(1));
	len = (t + 1) - start;
	return (ft_strsub(s, start, len));
}
