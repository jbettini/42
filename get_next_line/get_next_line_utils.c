/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatthie <mmatthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:17:40 by mmatthie          #+#    #+#             */
/*   Updated: 2021/12/01 19:22:40 by mmatthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char	*str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_isn(char	*str, int c)
{
	size_t	i;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}

char	*ft_strjoin(char	*src, char	*dest)
{
	size_t	i;
	size_t	j;
	char	*newline;

	if (!src)
	{
		src = malloc(sizeof(char) * 1);
		src[0] = 0;
	}
	if (!src || !dest)
		return (NULL);
	newline = malloc(sizeof(char) * ft_strlen(src) + ft_strlen(dest) + 1);
	if (!newline)
		return (NULL);
	i = -1;
	while (src[++i])
		newline[i] = src[i];
	j = 0;
	while (dest[j])
		newline[i++] = dest[j++];
	newline[i] = 0;
	free (src);
	return (newline);
}
