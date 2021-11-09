/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatthie <mmatthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 19:27:18 by mmatthie          #+#    #+#             */
/*   Updated: 2021/10/22 19:27:18 by mmatthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[i] == 0)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		if (needle[j] == haystack[i + j])
		{
			while (needle[j] == haystack[i + j] && i + j < len)
			{
				if (needle[j + 1] == 0)
					return ((char *)haystack + i);
				j++;
			}
		}
		j = 0;
		i++;
	}
	return (NULL);
}
