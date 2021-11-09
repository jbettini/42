/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatthie <mmatthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:44:48 by mmatthie          #+#    #+#             */
/*   Updated: 2021/10/21 15:44:48 by mmatthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*string;

	if (n == 0)
		return (str);
	string = (unsigned char *)str;
	while (n--)
	{
		*string = (unsigned char)c;
		if (n)
			string++;
	}
	return (str);
}
