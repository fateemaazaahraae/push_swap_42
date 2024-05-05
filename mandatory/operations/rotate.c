/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbazaz <fbazaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 20:37:17 by fbazaz            #+#    #+#             */
/*   Updated: 2024/05/05 16:46:35 by fbazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
	write(1, "ra\n", 3);
}

void	rb(t_stack **s)
{
	if (!(*s))
		return ;
	rotate(s);
	write(1, "rb\n", 3);
}

void	rr(t_stack **a, t_stack **b)
{
	if (!(*a) || !(*b))
		return ;
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
}
