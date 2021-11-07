/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatthie <mmatthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 18:39:01 by mmatthie          #+#    #+#             */
/*   Updated: 2021/10/29 18:39:01 by mmatthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*lst;

	lst = *alst;
	if (!*alst)
	{
		*alst = new;
		return ;
	}
	if (!new)
		return ;
	while (lst && lst->next)
		lst = lst->next;
	lst->next = new;
}
