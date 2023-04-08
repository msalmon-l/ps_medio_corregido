/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 22:49:48 by msalmon-          #+#    #+#             */
/*   Updated: 2023/04/08 16:19:21 by msalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstprint(t_list *list)
{
	while (list)
	{
		ft_putnbr_fd(list->content, 1);
		ft_putstr("\n");
		if (list->next == NULL)
			break ;
		else
			list = list->next;
	}
	return ((void) 0);
}

void	ft_print_values(t_list *list)
{
	if (!list)
		return ;
	while (list)
	{
		ft_putnbr_fd(list->pos, 1);
		ft_putstr("\n");
		list = list->next;
	}
	return ;
}
