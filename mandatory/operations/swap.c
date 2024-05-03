/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbazaz <fbazaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 20:29:46 by fbazaz            #+#    #+#             */
/*   Updated: 2024/04/29 14:04:46 by fbazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
	if (!s)
		return ;
	swap(s);
	write(1, "sa\n", 3);
}

void	sb(t_stack **s)
{
	if (!s)
		return ;
	swap(s);
	write(1, "sb\n", 3);
}

void	ss(t_stack **a, t_stack **b)
{
	if (!a || !b)
		return ;
	swap(a);
	swap(b);
	write(1, "ss\n", 3);
}
