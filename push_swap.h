/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 22:02:15 by msalmon-          #+#    #+#             */
/*   Updated: 2023/04/08 19:23:07 by msalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include <unistd.h>

typedef struct s_list
{
	int				content;
	int				pos;
	struct s_list	*next;
}	t_list;

void	ft_free(t_list	**list);
void	ft_lstprint(t_list *list); //quitar de las lista
void	ft_print_values(t_list *list); //quitar al final para pasar norminette
int		ft_putstr(char *str);
t_list	*ft_lstnew(int num);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list	*lst);
void	ft_lstadd_back(t_list **lst, t_list	*new);
int		ft_lstsize(t_list *lst);
void	ft_putnbr_fd(int n, int fd);
void	ft_put_position(t_list **lst, int num);
t_list	*ft_max_value(t_list **lst);

int		ft_atoi(const char *str, t_list **lst, char **ptr);
char	**ft_split(char const *s, char c);
char	*ft_strtrim(char const *ptr1, char const *set);
size_t	ft_strlen(const char *s);
void	ft_free_ptr(char **str);
char	*ft_strchr(const char *s, int c);

void	ft_error(t_list **list, char **ptr);
void	ft_swap(t_list **sa);
void	ft_push(t_list **pila_firts, t_list **pila_add);
void	ft_rotate(t_list **pila);
void	ft_reverse_rotate(t_list **pila);
void	ft_check_values(char **argv, t_list **list, int opc);
int		ft_is_order(t_list *lst);
int		ft_check_inputs(const char *str);
void	ft_go_to_order(t_list **lst, t_list **lst_b, int number);
//void	ft_order_three(t_list **lst);
void	ft_swap_option(t_list **lst, t_list **lst_b, char option);
void	ft_push_option(t_list **lst, t_list **lst_b, char option);
void	ft_rotate_option(t_list **lst, t_list **lst_b, char option);
void	ft_reverse_option(t_list **lst, t_list **lst_b, char option);
void	ft_order_three(t_list **lst, int num);
void	ft_order_five(t_list **lst_a, t_list **lst_b, int num);
//herramienta de algorithmo de 5
void	ft_search_min(t_list **lst_a, t_list **lst_b);
//ordenar todos:
void	ft_order_radix(t_list **lst_a, t_list **lst_b, int num);
int		ft_get_round(int number);
void	ft_push_to_b(t_list **lst_a, t_list **lst_b, int number, int position);
int		ft_push_back_a(t_list **lst_a, t_list **lst_b, int number, int pos);
#endif
