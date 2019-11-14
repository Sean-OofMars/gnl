/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferreir <sferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 08:14:17 by sferreir          #+#    #+#             */
/*   Updated: 2019/10/25 10:06:06 by sferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"

static int	new_line(int fd, char **line, int count, char **max)
{
	char		*tmp;
	int			i;

	i = 0;
	while (max[fd][i] != '\0' && max[fd][i] != '\n')
		i++;
	if (max[fd][i] == '\n')
	{
		*line = ft_strsub(max[fd], 0, i);
		tmp = ft_strdup(max[fd] + i + 1);
		free(max[fd]);
		max[fd] = tmp;
		if (max[fd][0] == '\0')
			ft_strdel(&max[fd]);
	}
	else if (max[fd][i] == '\0')
	{
		if (count == BUFF_SIZE)
			return (get_next_line(fd, line));
		*line = ft_strdup(max[fd]);
		ft_strdel(&max[fd]);
	}
	return (1);
}

int			get_next_line(const int fd, char **line)
{
	static char	*max[255];
	char		curr[BUFF_SIZE + 1];
	int			count;
	char		*tmp;

	if (fd < 0 || line == NULL)
		return (-1);
	while ((count = read(fd, curr, BUFF_SIZE)) > 0)
	{
		curr[count] = '\0';
		if (max[fd] == NULL)
			max[fd] = ft_strnew(1);
		tmp = ft_strjoin(max[fd], curr);
		free(max[fd]);
		max[fd] = tmp;
		if (ft_strchr(curr, '\n'))
			break ;
	}
	if (count < 0)
		return (-1);
	else if (count == 0 && (max[fd] == NULL || max[fd][0] == '\0'))
		return (0);
	return (new_line(fd, line, count, max));
}
