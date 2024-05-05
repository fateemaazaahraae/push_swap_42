/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbazaz <fbazaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 20:37:39 by fbazaz            #+#    #+#             */
/*   Updated: 2024/05/05 16:46:02 by fbazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rotate(t_stack **s)
{
	t_stack	*last;
	t_stack	*tmp;
	int		size;
	int		i;

	i = 0;
	size = ft_lstsize(*s);
	last = ft_lstlast(*s);
	tmp = *s;
	while (i < size && s)
	{
		if (i == size - 2)
			(*s)->next = NULL;
		else
			(*s) = (*s)->next;
		i++;
	}
	*s = tmp;
	last->next = *s;
	*s = last;
}

void	rra(t_stack **s)
{
	if (!(*s))
		return ;
	reverse_rotate(s);
	write(1, "rra\n", 4);
}

void	rrb(t_stack **s)
{
	if (!(*s))
		return ;
	reverse_rotate(s);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b)
{
	if (!(*a) || !(*b))
		return ;
	reverse_rotate(a);
	reverse_rotate(b);
	write(1, "rrr\n", 4);
}
