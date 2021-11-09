/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatthie <mmatthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 12:47:09 by mmatthie          #+#    #+#             */
/*   Updated: 2021/10/22 12:47:09 by mmatthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat( char *dst, const char	*src, size_t	size)
{
	size_t		i;
	size_t		j;
	size_t		dst_l;
	size_t		src_l;

	dst_l = ft_strlen(dst);
	src_l = ft_strlen(src);
	i = 0;
	j = 0;
	if (!size || dst_l > size)
		return (src_l + size);
	while (dst[i])
		i++;
	while (src[j] && (j + i) < size - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = 0;
	return (src_l + i);
}
