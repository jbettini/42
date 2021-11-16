/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatthie <mmatthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:10:15 by mmatthie          #+#    #+#             */
/*   Updated: 2021/11/06 16:39:07 by mmatthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(int n)
{
	int	res;

	res = 0;
	if (!n)
		return (1);
	if (n < 0)
		res++;
	while (n)
	{
		n /= 10;
		res++;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len_res;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len_res = (get_len(n));
	res = malloc(sizeof(char) * len_res + 1);
	if (!res)
		return (NULL);
	if (n == 0 || (!n))
		res[0] = '0';
	if (n < 0)
	{
		res[0] = '-';
		n *= -1;
	}
	res[len_res] = '\0';
	while (n)
	{
		res[--len_res] = (n % 10) + 48;
		n /= 10;
	}
	return (res);
}
