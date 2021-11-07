/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatthie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 13:04:05 by mmatthie          #+#    #+#             */
/*   Updated: 2021/06/23 15:29:50 by mmatthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int	min, int	max)
{
	int	i;
	int	*tab;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	tab = malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return (NULL);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
