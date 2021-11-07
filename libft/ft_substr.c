/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatthie <mmatthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:26:52 by mmatthie          #+#    #+#             */
/*   Updated: 2021/10/31 16:34:39 by mmatthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const	*s, unsigned int start, size_t	len)
{
	size_t			i;
	char			*res;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_calloc(1, 1));
	if (len > ft_strlen(s))
		return (ft_strdup(&s[start]));
	res = malloc(sizeof(char) * len + 1);
	if ((res == NULL) || (!res))
		return (NULL);
	while (i < len && s[i])
		res[i++] = s[start++];
	res[i] = 0;
	return (res);
}
