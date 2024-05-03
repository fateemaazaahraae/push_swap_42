/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_less5.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbazaz <fbazaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 20:17:07 by fbazaz            #+#    #+#             */
/*   Updated: 2024/05/03 13:27:15 by fbazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_if_sorted(t_ps *ps, t_stack *a)
{
	int	i;

	i = 0;
	while (i < ps->size)
	{
		if (ps->arr[i] != a->data)
			return ;
		i++;
		a = a->next;
	}
	exit(0);
}

void	sort_2(t_stack **s)
{
	if ((*s)->data > (*s)->next->data)
		sa(s);
}

void	sort_3(t_stack **s)
{
	int	pos;

	pos = find_bigger_num(s);
	if (pos == 1)
		ra(s);
	else if (pos == 2)
		rra(s);
	sort_2(s);
}

void	sort_5(t_stack **a, t_stack **b, int size)
{
	int	pos;

	pos = find_smaller_num(a);
	if (size == 4)
		top_min(a, pos, size);
	else if (size == 5)
	{
		top_min(a, pos, size);
		pb(a, b);
		pos = find_smaller_num(a);
		top_min(a, pos, size - 1);
	}
	pb(a, b);
	sort_3(a);
	pa(a, b);
	if (size == 5)
		pa(a, b);
}
