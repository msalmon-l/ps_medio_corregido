/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_go_to_order.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 19:45:27 by msalmon-          #+#    #+#             */
/*   Updated: 2023/04/08 19:12:57 by priezu-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_order_radix(t_list **lst_a, t_list **lst_b, int num)
{
	int	round;
	int	i;

	if (!lst_a)
		return ;
	round = ft_get_round(num);
	i = 0;
	while (i < round)
	{
		if (round == i + 1)
			ft_push_to_b(lst_a, lst_b, -1, i);
		else
			ft_push_to_b(lst_a, lst_b, 0, i);
		i++;
		if (round == i)
			ft_push_back_a(lst_a, lst_b, 0, -1);
		else
			ft_push_back_a(lst_a, lst_b, 0, i);
	}
}

int	ft_get_round(int number)
{
	int	i;

	i = 1;
	while (number >= 2)
	{
		number /= 2;
		i++;
	}
	return (i);
}

void	ft_push_to_b(t_list **lst_a, t_list **lst_b, int number, int position)
{
	int			i;
	const int	total_number = ft_lstsize((*lst_a));
	const int	max_number = total_number + ft_lstsize((*lst_b));

	i = 0;
	while (i++ < total_number)
	{
		if ((*lst_a)->pos & 1 << position)
		{
			if (number == -1 && (*lst_a)->pos == max_number - 1)
			{
				ft_rotate_option(lst_a, NULL, 'a');
				break ;
			}
			else
				ft_rotate_option(lst_a, NULL, 'a');
		}
		else
			ft_push_option(lst_a, lst_b, 'a');
	}
}

int	ft_push_back_a(t_list **lst_a, t_list **lst_b, int number, int pos)
{
	int	i;
	int	traslated;

	i = 0;
	number = ft_lstsize((*lst_b));
	traslated = number;
	while (i < number)
	{
		if (pos != -1)
		{
			if ((*lst_b)->pos & 1 << pos)
				ft_push_option(lst_a, lst_b, 'b');
			else
				ft_rotate_option(NULL, lst_b, 'b');
		}
		else
			ft_push_option(lst_a, lst_b, 'b');
		i++;
	}
	return (traslated);
}

/*
int	ft_push_back_a(t_list **lst_a, t_list **lst_b, int number, int pos)
{
	int	size_a;
	int	size_b;
	int	resto;

	size_a = ft_lstsize(a);
	size_b = ft_lstsize(b);
	resto = (size_a + size_b) % 2;
	while (size_a + resto < size_b)
	{
		ft_push_option(lst_a, lst_b, 'b');
		size_a++;
		size_b--;
	}


	return (0);
}
*/
