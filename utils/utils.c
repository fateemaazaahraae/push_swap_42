/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbazaz <fbazaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:38:26 by fbazaz            #+#    #+#             */
/*   Updated: 2024/05/05 11:25:22 by fbazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mandatory/push_swap.h"

void	ft_free(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

int	find_bigger_num(t_stack **s)
{
	int		i;
	int		max;
	t_stack	*tmp;

	max = (*s)->data;
	i = 1;
	tmp = *s;
	while (*s)
	{
		if ((*s)->data > max)
			max = (*s)->data;
		*s = (*s)->next;
	}
	*s = tmp;
	while (*s)
	{
		if ((*s)->data == max)
		{
			*s = tmp;
			return (i);
		}
		i++;
		*s = (*s)->next;
	}
	return (0);
}

int	find_smaller_num(t_stack **s)
{
	int		i;
	int		min;
	t_stack	*tmp;

	min = (*s)->data;
	i = 1;
	tmp = *s;
	while (*s)
	{
		if ((*s)->data < min)
			min = (*s)->data;
		*s = (*s)->next;
	}
	*s = tmp;
	while (*s)
	{
		if ((*s)->data == min)
		{
			*s = tmp;
			return (i);
		}
		i++;
		*s = (*s)->next;
	}
	return (0);
}

void	top_min(t_stack **a, int pos, int i)
{
	if (pos == 2)
		ra(a);
	else if (pos == 3)
	{
		ra(a);
		ra(a);
	}
	else if (pos == 4 && i == 5)
	{
		rra(a);
		rra(a);
	}
	else if (pos == 5 || (pos == 4 && i == 4))
		rra(a);
}
