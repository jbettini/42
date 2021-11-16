/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatthie <mmatthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 21:30:41 by mmatthie          #+#    #+#             */
/*   Updated: 2021/10/21 21:30:41 by mmatthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t			i;
	unsigned char	c1;
	unsigned char	c2;

	i = 0;
	while (i < n && (str1[i] || str2[i]))
	{
		c1 = (unsigned char)str1[i];
		c2 = (unsigned char)str2[i];
		if (c1 != c2)
			return (c1 - c2);
		i++;
	}
	return (0);
}
