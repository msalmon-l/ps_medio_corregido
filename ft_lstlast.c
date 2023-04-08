/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 19:08:15 by msalmon-          #+#    #+#             */
/*   Updated: 2023/04/08 15:07:56 by msalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstlast(t_list	*lst)
{
	t_list	*str;

	if (!lst)
		return (0);
	str = lst;
	while (str->next != NULL)
		str = str->next;
	return (str);
}
