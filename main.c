/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 22:02:29 by msalmon-          #+#    #+#             */
/*   Updated: 2023/04/08 21:13:20 by msalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_copy_to_list(char *argv, t_list **pila_a);

int	main(int argc, char **argv)
{
	t_list	*pila_a;
	t_list	*pila_b;
	int		i;

	pila_a = NULL;
	pila_b = NULL;
	i = 1;
	if (argc < 2)
		return (0);
	while (i < argc)
	{
		ft_copy_to_list(argv[i], &pila_a);
		i++;
	}
	i = ft_lstsize(pila_a);
	ft_put_position(&pila_a, i);
	ft_go_to_order(&pila_a, &pila_b, i);
}

void	ft_copy_to_list(char *argv, t_list **pila_a)
{
	char	**ptr;

	ptr = NULL;
	if (ft_strchr(argv, ' ') != 0)
	{
		ptr = ft_split(argv, ' ');
		ft_check_values(ptr, pila_a, 1);
		ft_free_ptr(ptr);
	}
	else
	{
		if (ft_check_inputs(argv) == -1)
			ft_error(pila_a, NULL);
		ft_lstadd_back(pila_a, ft_lstnew(ft_atoi(argv, pila_a, NULL)));
	}
	return ;
}
