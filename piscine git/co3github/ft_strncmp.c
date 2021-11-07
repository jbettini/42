/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatthie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 17:46:33 by mmatthie          #+#    #+#             */
/*   Updated: 2021/06/17 17:15:58 by mmatthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

int	ft_strncmp(char	*s1, char	*s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	cmp_1;
	unsigned char	cmp_2;

	i = 0;
	cmp_1 = (unsigned char)s1[i];
	cmp_2 = (unsigned char)s2[i];
	if (!n)
		return (n);
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
		{
			cmp_1 = (unsigned char)s1[i];
			cmp_2 = (unsigned char)s2[i];
			return (cmp_1 - cmp_2);
		}
		i++;
	}
	return (0);
}
