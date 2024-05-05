/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbazaz <fbazaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 09:51:59 by fbazaz            #+#    #+#             */
/*   Updated: 2024/05/05 17:14:07 by fbazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "../mandatory/push_swap.h"
# include "gnl/get_next_line.h"

void	read_operations(t_stack **a, t_stack **b, t_ps *ps);
void	do_operations(char *op, t_stack **a, t_stack **b);
void	ft_check_args(t_ps *ps, char **av, t_stack **head);

void	swap(t_stack **s);
void	sa(t_stack **s);
void	sb(t_stack **s);
void	ss(t_stack **a, t_stack **b);

void	push(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);

void	rotate(t_stack **s);
void	ra(t_stack **s);
void	rb(t_stack **s);
void	rr(t_stack **a, t_stack **b);

void	reverse_rotate(t_stack **s);
void	rra(t_stack **s);
void	rrb(t_stack **s);
void	rrr(t_stack **a, t_stack **b);

#endif