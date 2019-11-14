/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferreir <sferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 11:21:52 by sferreir          #+#    #+#             */
/*   Updated: 2019/10/04 10:45:59 by sferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include "libft.h"

static size_t	word_count(const char *s, char c)
{
	int		i;
	size_t	w;

	i = 0;
	w = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			w++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
		if (s[i] == '\0')
			return (w);
	}
	return (w);
}

static size_t	find_length(char const *s, char c, int i)
{
	size_t	b;

	b = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		b++;
	}
	return (b);
}

static int		find_start(char const *s, char c, int i)
{
	int		a;

	a = 0;
	if (s[i] == c)
	{
		while (s[i] == c)
			i++;
		a = i;
	}
	return (a);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**ret;
	int		i;
	size_t	x;
	size_t	b;

	i = 0;
	x = 0;
	if (!(ret = (char**)malloc((sizeof(*ret) * word_count(s, c)))))
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			b = find_length(s, c, i);
			ret[x] = ft_strsub(s, i, b);
			x++;
			i = i + b;
		}
		else
			i = find_start(s, c, i);
	}
	return (ret);
}
