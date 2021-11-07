/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatthie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 18:37:39 by mmatthie          #+#    #+#             */
/*   Updated: 2021/06/23 19:09:33 by mmatthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_lenght(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_size_res(int	size,	char	**strs,	char	*sep)
{
	int	i;
	int	size_res;

	size_res = 0;
	i = -1;
	while (++i < size)
		size_res += get_lenght(strs[i]);
	i = -1;
	while (++i < size - 1)
		size_res += get_lenght(sep);
	return (size_res);
}

char	*ft_strcpy(char	*dest,	char	*src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int	size,	char	**strs,	char	*sep)
{
	char	*res;
	int		size_res;
	int		i;
	int		j;

	size_res = ft_size_res(size, strs, sep);
	res = malloc(sizeof(*res) * (size_res + 1));
	if (size == 0)
		return (res);
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (i < size)
	{
		ft_strcpy(res + j, strs[i]);
		j += get_lenght(strs[i]);
		if (++i < size)
		{
			ft_strcpy(res + j, sep);
			j += get_lenght(sep);
		}
	}
	return (res);
}
