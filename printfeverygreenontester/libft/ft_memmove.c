/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatthie <mmatthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:35:00 by mmatthie          #+#    #+#             */
/*   Updated: 2021/10/22 19:21:38 by mmatthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*dst, const	void *src, size_t	n)
{
	char		*d;
	const char	*s;

	if (!dst && !src)
		return (NULL);
	d = dst;
	s = src;
	if (d < s)
		while (n--)
			*d++ = *s++;
	else
	{
		d += n - 1;
		s += n - 1;
		while (n--)
			*d-- = *s--;
	}
	return (dst);
}
