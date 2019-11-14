/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferreir <sferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 13:30:37 by sferreir          #+#    #+#             */
/*   Updated: 2019/10/07 13:37:01 by sferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		r;
	int		s;

	i = 0;
	s = 1;
	r = 0;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\f'
				|| str[i] == '\r' || str[i] == '\n' || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		s = -1;
		i++;
	}
	if (str[i] == '+' || str[i] == '-')
		++str;
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	return (r * s);
}
