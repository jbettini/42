/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatthie <mmatthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 13:00:44 by mmatthie          #+#    #+#             */
/*   Updated: 2021/10/26 13:09:28 by mmatthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char	*str, int c)
{
	int	i;

	i = ft_strlen(str);
	if ((char)c == '\0')
		return ((char *)str + i);
	while (i--)
		if (str[i] == (char)c)
			return ((char *)&str[i]);
	return (NULL);
}
