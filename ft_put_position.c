/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_position.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 20:10:46 by msalmon-          #+#    #+#             */
/*   Updated: 2023/04/06 19:24:56 by msalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	*ft_putting_pos(t_list *list, t_list *biggest, t_list *l_small);

void	ft_put_position(t_list **lst, int num)
{
	int		i;
	t_list	*biggest;
	t_list	*smaller;
	t_list	*last_smaller;

	i = 0;
	smaller = NULL;
	last_smaller = NULL;
	biggest = NULL;
	if (!lst)
		return ;
	biggest = ft_max_value(lst);
	while (i < num)
	{
		smaller = ft_putting_pos((*lst), biggest, last_smaller);
		smaller->pos = i++;
		last_smaller = smaller;
	}
}

static t_list	*ft_putting_pos(t_list *list, t_list *biggest, t_list *l_small)
{
	t_list	*smaller;

	smaller = biggest;
	while (list)
	{
		if ((smaller->content > list->content) && (!l_small \
					|| list->content > l_small->content))
			smaller = list;
		list = list->next;
	}
	return (smaller);
}

t_list	*ft_max_value(t_list **lst)
{
	t_list	*max;
	t_list	*list;

	if (!lst)
		return (0);
	max = (*lst);
	list = (*lst);
	while (list)
	{
		if (list->content > max->content)
			max = list;
		list = list->next;
	}
	return (max);
}
