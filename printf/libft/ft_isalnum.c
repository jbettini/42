/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatthie <mmatthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:19:19 by mmatthie          #+#    #+#             */
/*   Updated: 2021/10/21 15:19:19 by mmatthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int character)
{
	if ((character >= 97 && character <= 122) \
		|| (character >= 65 && character <= 90) \
		|| (character >= 48 && character <= 57))
		return (1);
	else
		return (0);
}
