/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferreir <sferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 14:52:50 by sferreir          #+#    #+#             */
/*   Updated: 2019/10/03 09:30:13 by sferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strncmp(const char *one, const char *two, size_t n)
{
	size_t s;

	s = 0;
	while (one[s] == two[s] && one[s] != '\0' && two[s] != '\0' && s < n)
		s++;
	if (one[s] != two[s])
		return ((unsigned char)one[s] - (unsigned char)two[s]);
	else
		return (0);
}
