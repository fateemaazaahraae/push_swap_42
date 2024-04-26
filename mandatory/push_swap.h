/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbazaz <fbazaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 10:22:28 by fbazaz            #+#    #+#             */
/*   Updated: 2024/04/25 15:40:04 by fbazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP

# define INT_MAX 2147483647
# define INT_MIN -2147483648

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct push_swap
{
    char *tab;
    char *tmp;
    char **args;
    int *arr;
    int size;
}   t_ps;

typedef struct stack
{
    int data;
    struct stack *next;
}   t_stack;

void    join_args(t_ps *ps, char **av, int ac);
void    check_args(t_ps *ps, char **av, t_stack **head);
int     ft_print_error();
void    check_digit(char *str);
void    check_sign(char *str);
void    ft_check_dup(t_ps *ps);

// utils
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *src);
size_t	ft_strlen(const char *s);
char	**ft_split(char const *s, char c);
int     ft_strcmp(const char *s1, const char *s2);
int	    ft_isdigit(int c);
int 	ft_atoi(char *str);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
t_stack	*ft_lstlast(t_stack *lst);
t_stack	*ft_lstnew(int *content);
int	ft_lstsize(t_stack *lst);

void    swap_a(t_stack **s);
void    swap_b(t_stack **s);
void    swap(t_stack **s);
void    push_a(t_stack **a, t_stack **b);
void    push(t_stack **a, t_stack **b);
void    push_b(t_stack **a, t_stack **b);
void    rotate(t_stack **s);
void    rotate_a(t_stack **s);
void    rotate_b(t_stack **s);
void    rotate_ab(t_stack **a, t_stack **b);
void    reverse_rotate_a(t_stack **s);
void    reverse_rotate(t_stack **s);
void    reverse_rotate_b(t_stack **s);
void    reverse_rotate_ab(t_stack **a, t_stack **b);

#endif