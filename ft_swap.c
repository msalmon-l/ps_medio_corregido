/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 19:56:51 by msalmon-          #+#    #+#             */
/*   Updated: 2023/04/06 17:11:57 by msalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_list **sa)
{
	t_list	*a;
	t_list	*b;
	int		size;

	a = (*sa);
	b = (*sa)->next->next;
	size = ft_lstsize(*sa);
	if (size < 2)
		return ((void)0);
	*sa = (*sa)->next;
	(*sa)->next = a;
	(*sa)->next->next = b;
	return ((void) 0);
}

void	ft_push(t_list **pila_firts, t_list **pila_add)
{
	t_list	*new_firts;

	new_firts = NULL;
	if (!(*pila_firts))
		return ;
	if ((*pila_firts)->next != NULL)
		new_firts = (*pila_firts)->next;
	ft_lstadd_front(pila_add, (*pila_firts));
	(*pila_firts) = new_firts;
	return ;
}

void	ft_rotate(t_list **pila)
{
	t_list	*changed;
	t_list	*old_last;

	changed = (*pila);
	old_last = ft_lstlast((*pila));
	(*pila) = (*pila)->next;
	old_last->next = changed;
	changed->next = NULL;
}

void	ft_reverse_rotate(t_list **pila)
{
	t_list	*old_firts;
	t_list	*new_firts;
	int		i;

	i = ft_lstsize(*pila);
	if (i < 2)
		return ((void) 0);
	new_firts = ft_lstlast((*pila));
	old_firts = (*pila);
	(*pila) = new_firts;
	(*pila)->next = old_firts;
	while (i-- > 1)
		(*pila) = (*pila)->next;
	(*pila)->next = NULL;
	(*pila) = new_firts;
	return ((void) 0);
}
