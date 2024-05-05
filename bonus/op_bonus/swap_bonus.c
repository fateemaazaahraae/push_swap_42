/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbazaz <fbazaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 20:29:46 by fbazaz            #+#    #+#             */
/*   Updated: 2024/05/05 16:10:01 by fbazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	swap(t_stack **s)
{
	t_stack	*tmp;

	if (!(*s)->next)
		return ;
	tmp = (*s)->next;
	(*s)->next = tmp->next;
	tmp->next = (*s);
	(*s) = tmp;
}

void	sa(t_stack **s)
{
	if (!(*s))
		return ;
	swap(s);
}

void	sb(t_stack **s)
{
	if (!(*s))
		return ;
	swap(s);
}

void	ss(t_stack **a, t_stack **b)
{
	if (!(*a) || !(*b))
		return ;
	swap(a);
	swap(b);
}
