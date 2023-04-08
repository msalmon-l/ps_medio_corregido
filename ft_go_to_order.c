/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_go_to_order.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 19:45:27 by msalmon-          #+#    #+#             */
/*   Updated: 2023/04/08 21:26:14 by msalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_go_to_order(t_list **lst, t_list **lst_b, int number)
{
	if (number < 4 && number > 1)
		ft_order_three(lst, number);
	else if (number < 6)
		ft_order_five(lst, lst_b, number);
	else
		ft_order_radix(lst, lst_b, number);
}

void	ft_order_three(t_list **lst, int num)
{
	if ((*lst)->content > (*lst)->next->content)
		ft_swap_option(lst, NULL, 'a');
	if (num != 2 && (*lst)->content > (*lst)->next->next->content)
		ft_reverse_option(lst, NULL, 'a');
	if (num != 2 && (*lst)->next->content > (*lst)->next->next->content)
	{
		ft_reverse_option(lst, NULL, 'a');
		ft_swap_option(lst, NULL, 'a');
	}
}

void	ft_order_five(t_list **lst_a, t_list **lst_b, int num)
{
	int	i;

	i = 3;
	while (ft_lstsize(*lst_b) < 2)
	{
		if ((*lst_a)->pos == 0 || (*lst_a)->pos == 1)
			ft_push_option(lst_a, lst_b, 'a');
		else
			ft_rotate_option(lst_a, lst_b, 'a');
	}
	ft_order_three(lst_a, 3);
	ft_push_option(lst_a, lst_b, 'b');
	ft_push_option(lst_a, lst_b, 'b');
	if ((*lst_a)->content > (*lst_a)->next->content)
		ft_swap_option(lst_a, NULL, 'a');
	return ;
}

void	ft_search_min(t_list **lst_a, t_list **lst_b)
{
	t_list	*firts;
	t_list	*min_val;

	firts = (*lst_a);
	min_val = (*lst_a);
	while ((*lst_a))
	{
		if ((*lst_a)->content < min_val->content)
			min_val = (*lst_a);
		(*lst_a) = (*lst_a)->next;
	}
	(*lst_a) = firts;
	while (1 < 10)
	{
		if (min_val->content == (*lst_a)->content)
			break ;
		ft_rotate_option(lst_a, lst_b, 'a');
	}
	ft_push_option(lst_a, lst_b, 'a');
	return ;
}
