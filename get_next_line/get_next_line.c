/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatthie <mmatthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:17:34 by mmatthie          #+#    #+#             */
/*   Updated: 2021/12/06 20:59:08 by mmatthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	int			byte_read;
	static char	*save;
	char		buf[BUFFER_SIZE + 1];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	byte_read = 1;
	while (byte_read != 0 && !ft_isn(save, '\n'))
	{
		byte_read = read(fd, buf, BUFFER_SIZE);
		if (byte_read == -1)
			return (NULL);
		buf[byte_read] = 0;
		save = ft_strjoin(save, buf);
		if (!save)
			return (NULL);
	}
	line = ft_makeline(save);
	save = ft_restline(save);
	return (line);
}

char	*ft_makeline(char	*save)
{
	size_t	i;
	char	*newline;

	i = 0;
	if (!save[i])
		return (NULL);
	while (save[i] && save[i] != '\n')
		i++;
	if (save[i] == '\n')
		newline = malloc(sizeof(char) * (i + 2));
	else
		newline = malloc(sizeof(char) * (i + 1));
	if (!newline)
		return (NULL);
	i = -1;
	while (save[++i] && save[i] != '\n')
		newline[i] = save[i];
	if (save[i] == '\n')
	{
		newline[i] = '\n';
		i++;
	}
	newline[i] = 0;
	return (newline);
}
//  |a|l|l|o|\n|l|e|s|\n|p|o|t|e|s|\0|

char	*ft_restline(char	*save)
{
	size_t	i;
	size_t	j;
	char	*newline;

	i = 0;
	j = 0;
	while (save[i] && save[i] != '\n')
		i++;
	if (save[i])
	{
		newline = malloc(sizeof(char) * ft_strlen(save) - i + 1);
		if (!newline)
			return (NULL);
		while (save[i])
			newline[j++] = save[++i];
		newline[j] = 0;
		free (save);
		return (newline);
	}
	else
	{
		free (save);
		return (NULL);
	}
}
