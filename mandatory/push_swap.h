/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbazaz <fbazaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 10:22:28 by fbazaz            #+#    #+#             */
/*   Updated: 2024/05/03 13:35:43 by fbazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define INT_MAX 2147483647
# define INT_MIN -2147483648

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct push_swap
{
	char			*tab;
	char			*tmp;
	char			**args;
	int				*arr;
	int				size;
	int				range;
	int				start;
	int				end;
}					t_ps;

typedef struct stack
{
	int				data;
	struct stack	*next;
}					t_stack;

void				check_args(t_ps *ps, char **av, t_stack **head);
int					ft_print_error(void);
void				check_digit(char *str);
void				check_sign(char *str);
void				ft_check_dup(t_ps *ps);
int					find_bigger_num(t_stack **s);
int					find_smaller_num(t_stack **s);
void				ft_check_if_sorted(t_ps *ps, t_stack *a);
void				top_min(t_stack **a, int pos, int i);
void				sort_2(t_stack **s);
void				sort_3(t_stack **s);
void				sort_5(t_stack **a, t_stack **b, int size);
void				ft_sort(t_stack **a, t_stack **b, t_ps *ps);
int					get_index(t_stack *a, t_ps *ps);
void				ft_sort2(t_stack **a, t_stack **b);
void				ft_norminette(t_stack **a, t_stack **b, t_ps *ps, int *i);

void				swap(t_stack **s);
void				sa(t_stack **s);
void				sb(t_stack **s);
void				ss(t_stack **a, t_stack **b);

void				push(t_stack **a, t_stack **b);
void				pa(t_stack **a, t_stack **b);
void				pb(t_stack **a, t_stack **b);

void				rotate(t_stack **s);
void				ra(t_stack **s);
void				rb(t_stack **s);
void				rr(t_stack **a, t_stack **b);

void				reverse_rotate(t_stack **s);
void				rra(t_stack **s);
void				rrb(t_stack **s);
void				rrr(t_stack **a, t_stack **b);

// utils
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strdup(const char *src);
size_t				ft_strlen(const char *s);
char				**ft_split(char const *s, char c);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_isdigit(int c);
int					ft_atoi(char *str);
void				ft_lstadd_back(t_stack **lst, t_stack *new);
t_stack				*ft_lstlast(t_stack *lst);
t_stack				*ft_lstnew(int *content);
int					ft_lstsize(t_stack *lst);

#endif