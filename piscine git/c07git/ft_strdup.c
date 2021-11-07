/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatthie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 11:48:31 by mmatthie          #+#    #+#             */
/*   Updated: 2021/06/24 11:00:48 by mmatthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char	*src)
{
	char	*res;
	int		len;

	len = 0;
	while (src[len])
	{
		len++;
	}
	res = malloc(sizeof (char) * len + 1);
	if (res == NULL)
		return (NULL);
	len = 0;
	while (src[len])
	{
		res[len] = src[len];
		len++;
	}
	res[len] = 0;
	return (res);
}
/*
int	main(void)
{
	char	*res;

	res = ft_strdup("");
	printf("%s\n", res);
	return (0);
}*/
