/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbazaz <fbazaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 11:01:45 by fbazaz            #+#    #+#             */
/*   Updated: 2024/05/03 13:29:47 by fbazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_fill_arr(t_stack **head, t_ps *ps)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = *head;
	while (i < ps->size)
	{
		ps->arr[i] = (*head)->data;
		*head = (*head)->next;
		i++;
	}
	*head = tmp;
}

void	swap_int(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_array(t_ps *ps)
{
	int	i;
	int	j;
	int	min;

	i = 0;
	while (i < ps->size - 1)
	{
		min = i;
		j = i + 1;
		while (j < ps->size)
		{
			if (ps->arr[j] < ps->arr[min])
				min = j;
			j++;
		}
		swap_int(&ps->arr[min], &ps->arr[i]);
		i++;
	}
}

void	check_args(t_ps *ps, char **av, t_stack **head)
{
	int	i;
	int	j;
	int	num;

	i = 1;
	while (av[i])
	{
		ps->args = ft_split(av[i], ' ');
		if (!ps->args[0])
			ft_print_error();
		j = 0;
		while (ps->args[j])
		{
			num = ft_atoi(ps->args[j]);
			ft_lstadd_back(head, ft_lstnew(&num));
			j++;
		}
		i++;
	}
	ps->size = ft_lstsize(*head);
	ps->arr = malloc(sizeof(int) * ps->size);
	ft_fill_arr(head, ps);
	ft_check_dup(ps);
	ft_sort_array(ps);
	ft_check_if_sorted(ps, *head);
}
