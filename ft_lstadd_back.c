/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 19:17:48 by msalmon-          #+#    #+#             */
/*   Updated: 2023/04/08 15:15:54 by msalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lista;

	lista = NULL;
	if (!new)
		return ((void)0);
	if ((*lst) == NULL)
		*lst = new;
	else
	{
		lista = ft_lstlast(*lst);
		lista->next = new;
	}
	return ((void)0);
}
