/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 22:02:29 by msalmon-          #+#    #+#             */
/*   Updated: 2023/04/08 16:13:15 by msalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_values(char **argv, t_list **list, int opc)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (ft_check_inputs(argv[i]) == -1)
		{
			if (opc == 1)
				ft_error(list, argv);
			else
				ft_error(list, NULL);
		}
		ft_lstadd_back(list, ft_lstnew(ft_atoi(argv[i], list, argv)));
		i++;
	}
	return ;
}

int	ft_is_order(t_list *lst)
{
	t_list	*next;
	int		i;

	next = NULL;
	i = 1;
	if (!lst)
		return (0);
	while (lst->next != NULL)
	{
		next = lst->next;
		if (lst->content > next->content)
		{
			i = 0;
			break ;
		}
		lst = lst->next;
	}
	return (i);
}

int	ft_check_inputs(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= '0' && str[i] <= '9') || ((str[i] == '+'
						|| str[i] == '-') && (str[i + 1] >= '0'
						&& str[i + 1] <= '9'))))
			return (-1);
		i++;
	}
	return (i);
}
