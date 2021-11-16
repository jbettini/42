/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatthie <mmatthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:56:54 by mmatthie          #+#    #+#             */
/*   Updated: 2021/11/06 16:45:59 by mmatthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	f_set(char str, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (str == set[i++])
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		len;
	char	*str;

	i = 0;
	j = 0;
	if (!s1)
		return (NULL);
	len = ft_strlen(s1);
	while (f_set(s1[i], (char *)set))
		i++;
	if (i == len)
		return (ft_calloc(1, 1));
	while (f_set(s1[--len], (char *)set))
		j++;
	len = ft_strlen(s1) - (i + j);
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	str[len] = 0;
	j = 0;
	while (j < len)
		str[j++] = s1[i++];
	return (str);
}
