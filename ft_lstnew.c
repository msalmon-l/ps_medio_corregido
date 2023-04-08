/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:52:27 by msalmon-          #+#    #+#             */
/*   Updated: 2023/04/06 17:00:56 by msalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(int num)
{
	t_list	*nuevo;

	nuevo = malloc(sizeof(t_list));
	if (!nuevo)
		return (0);
	nuevo->content = num;
	nuevo->pos = 0;
	nuevo->next = NULL;
	return (nuevo);
}
