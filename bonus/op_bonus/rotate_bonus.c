/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbazaz <fbazaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 20:37:17 by fbazaz            #+#    #+#             */
/*   Updated: 2024/05/05 16:09:35 by fbazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	rotate(t_stack **s)
{
	t_stack	*last;
	t_stack	*tmp;

	last = ft_lstlast(*s);
	tmp = *s;
	last->next = *s;
	(*s) = tmp->next;
	(last->next)->next = NULL;
}

void	ra(t_stack **s)
{
	if (!(*s))
		return ;
	rotate(s);
}

void	rb(t_stack **s)
{
	if (!(*s))
		return ;
	rotate(s);
}

void	rr(t_stack **a, t_stack **b)
{
	if (!(*a) || !(*b))
		return ;
	rotate(a);
	rotate(b);
}
