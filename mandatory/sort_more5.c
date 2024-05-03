/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_more5.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbazaz <fbazaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 17:14:29 by fbazaz            #+#    #+#             */
/*   Updated: 2024/05/03 12:27:05 by fbazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_set_range(t_ps *ps)
{
	if (ps->size >= 6 && ps->size < 16)
		ps->range = 3;
	else if (ps->size >= 16 && ps->size <= 100)
		ps->range = 13;
	else if (ps->size > 100 && ps->size <= 500)
		ps->range = 29;
	else
		ps->range = 42;
}

int	get_index(t_stack *a, t_ps *ps)
{
	int	i;

	i = 0;
	while (a)
	{
		if (((a->data >= ps->arr[ps->start] && a->data <= ps->arr[ps->end])
				|| a->data < ps->arr[ps->start]) && i <= ft_lstsize(a) / 2)
			return (1);
		if (((a->data >= ps->arr[ps->start] && a->data <= ps->arr[ps->end])
				|| a->data < ps->arr[ps->start]) && i > ft_lstsize(a) / 2)
			return (2);
		i++;
		a = a->next;
	}
	return (0);
}

void	ft_norminette(t_stack **a, t_stack **b, t_ps *ps, int *i)
{
	if ((*a)->data >= ps->arr[ps->start] && (*a)->data <= ps->arr[ps->end])
	{
		pb(a, b);
		if (ft_lstsize(*b) >= 2 && (*b)->data < ((*b)->next)->data)
			sb(b);
		(*i)++;
	}
	else if ((*a)->data < ps->arr[ps->start])
	{
		pb(a, b);
		rb(b);
		(*i)++;
	}
	else if ((*a)->data > ps->arr[ps->end])
	{
		if (get_index(*a, ps) == 1)
			ra(a);
		else if (get_index(*a, ps) == 2)
			rra(a);
	}
}

void	ft_sort(t_stack **a, t_stack **b, t_ps *ps)
{
	int	i;

	i = 0;
	ft_set_range(ps);
	while (*a)
	{
		ps->start = i;
		ps->end = ps->range + (i - 1);
		if (ps->end >= ps->size)
		{
			ps->end = ps->size - 1;
			ps->start = ps->end - ps->range;
		}
		ft_norminette(a, b, ps, &i);
	}
}

void	ft_sort2(t_stack **a, t_stack **b)
{
	int	pos;

	while (*b)
	{
		pos = find_bigger_num(b);
		if (pos == 1)
			pa(a, b);
		else if (pos <= ft_lstsize(*b) / 2)
			rb(b);
		else
			rrb(b);
	}
}
