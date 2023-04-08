/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 20:22:54 by msalmon-          #+#    #+#             */
/*   Updated: 2023/04/08 16:11:24 by msalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(t_list	**list, char **ptr)
{
	ft_free(list);
	ft_free_ptr(ptr);
	ft_putstr("Error\n");
	exit(EXIT_FAILURE);
}
