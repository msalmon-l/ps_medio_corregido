/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moviment_operations.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 19:56:51 by msalmon-          #+#    #+#             */
/*   Updated: 2023/04/08 17:13:27 by msalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_option(t_list **lst, t_list **lst_b, char option)
{
	if (option == 'a')
	{
		ft_swap(lst);
		ft_putstr("sa\n");
	}
	else if (option == 'b')
	{
		ft_swap(lst_b);
		ft_putstr("sb\n");
	}
	else if (option == 's')
	{
		ft_swap(lst);
		ft_swap(lst_b);
		ft_putstr("ss\n");
	}
}

void	ft_push_option(t_list **lst, t_list **lst_b, char option)
{
	if (option == 'a')
	{
		ft_push(lst, lst_b);
		ft_putstr("pb\n");
	}
	else if (option == 'b')
	{
		ft_push(lst_b, lst);
		ft_putstr("pa\n");
	}
}

void	ft_rotate_option(t_list **lst, t_list **lst_b, char option)
{
	if (option == 'a')
	{
		ft_rotate(lst);
		ft_putstr("ra\n");
	}
	else if (option == 'b')
	{
		ft_rotate(lst_b);
		ft_putstr("rb\n");
	}
	else if (option == 'r')
	{
		ft_rotate(lst);
		ft_rotate(lst_b);
		ft_putstr("rr\n");
	}
}

void	ft_reverse_option(t_list **lst, t_list **lst_b, char option)
{
	if (option == 'a')
	{
		ft_reverse_rotate(lst);
		ft_putstr("rra\n");
	}
	else if (option == 'b')
	{
		ft_reverse_rotate(lst_b);
		ft_putstr("rrb\n");
	}
	else if (option == 'r')
	{
		ft_reverse_rotate(lst);
		ft_reverse_rotate(lst_b);
		ft_putstr("rrr\n");
	}
}
