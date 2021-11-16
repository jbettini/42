/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putd_i.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatthie <mmatthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 22:16:37 by mmatthie          #+#    #+#             */
/*   Updated: 2021/11/15 22:19:08 by mmatthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(const char	*s)
{
	size_t	size;
	char	*str;
	int		i;

	size = ft_strlen(s);
	str = (char *) malloc(sizeof(char) * size + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

static int	size_len(int n)
{
	int	neg;
	int	res;

	neg = 0;
	res = 0;
	if (n <= 0)
	{
		neg = 1;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		res++;
	}
	return (res + neg);
}

int	ft_puti(int nb)
{
	int		i;
	char	*str;

	i = 0;
	str = ft_itoa(nb);
	i = write(1, str, ft_strlen(str));
	free (str);
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	int		neg;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	neg = 0;
	len = size_len(n);
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	str[len] = 0;
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
		neg = 1;
	}
	while (len-- > 0 + neg)
	{
		str[len] = n % 10 + 48;
		n /= 10;
	}
	return (str);
}
