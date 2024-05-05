/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbazaz <fbazaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 20:36:55 by fbazaz            #+#    #+#             */
/*   Updated: 2024/05/05 16:25:28 by fbazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	push(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	tmp = (*a)->next;
	(*a)->next = *b;
	*b = *a;
	*a = tmp;
}

void	pa(t_stack **a, t_stack **b)
{
	if (!(*b))
		return ;
	push(b, a);
}

void	pb(t_stack **a, t_stack **b)
{
	if (!(*a))
		return ;
	push(a, b);
}
