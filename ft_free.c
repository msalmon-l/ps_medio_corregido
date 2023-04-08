/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 17:27:48 by msalmon-          #+#    #+#             */
/*   Updated: 2023/04/06 16:54:59 by msalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(t_list **list)
{
	int		i;
	int		x;
	t_list	*free_l;

	if (!list)
		return ;
	i = ft_lstsize(*list);
	x = 0;
	while (x < i)
	{
		free_l = (*list);
		(*list) = (*list)->next;
		free(free_l);
		x++;
	}
}

void	ft_free_ptr(char **str)
{
	int	i;

	i = 0;
	if (!str)
		return ;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return ;
}

/*
int main ()
{
	t_list *a;

	a = ft_lstnew(3);
	ft_lstadd_back(&a, ft_lstnew(6));
	ft_lstadd_back(&a, ft_lstnew(9));
	ft_lstadd_back(&a, ft_lstnew(12));
	ft_lstadd_back(&a, ft_lstnew(15));
	ft_lstadd_back(&a, ft_lstnew(20));
	ft_free(&a);
}
*/
