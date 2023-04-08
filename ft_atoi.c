/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:27:21 by msalmon-          #+#    #+#             */
/*   Updated: 2023/04/08 21:04:29 by msalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_len(const char *str);
static long	add_zeros(long valor, int potenciador);
static int	ft_dupli(int num, t_list *lst);

int	ft_atoi(const char *str, t_list **lst, char **ptr)
{
	int		i;
	int		signo;
	long	result;

	i = 0;
	signo = 1;
	result = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signo = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result += add_zeros((str[i] - '0'), get_len(&str[i]));
		i++;
	}
	result *= signo;
	if (result < INT_MIN || result > INT_MAX || ft_dupli(result, (*lst)) == -1 || get_len(str) > 9)
		ft_error(lst, ptr);
	return (result);
}

static int	ft_dupli(int num, t_list *lst)
{
	if (!lst)
		return (0);
	while (lst)
	{
		if (num == lst->content)
			return (-1);
		lst = lst->next;
	}
	return (1);
}

static int	get_len(const char *str)
{
	int	i;

	i = 0;
	while (*str >= '0' && *str <= '9')
	{
		i++;
		str++;
	}
	return (i);
}

static long	add_zeros(long valor, int potenciador)
{
	while (1 < potenciador)
	{
		valor = valor * 10;
		potenciador--;
	}
	return (valor);
}
