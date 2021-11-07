/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatthie <mmatthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:56:22 by mmatthie          #+#    #+#             */
/*   Updated: 2021/10/21 15:56:22 by mmatthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char	*str)
{
	char	*res;
	int		len;
	int		i;

	len = ft_strlen(str);
	res = (char *)malloc (sizeof(char) * (len + 1));
	i = 0;
	if (res == NULL)
		return (NULL);
	while (str[i])
	{
		res[i] = str[i];
		i++;
	}
	res[len] = '\0';
	return (res);
}
