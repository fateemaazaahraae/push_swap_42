/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcing_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbazaz <fbazaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 09:51:44 by fbazaz            #+#    #+#             */
/*   Updated: 2024/05/05 17:13:50 by fbazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

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

int	ft_check_if_sorted(t_ps *ps, t_stack *a)
{
	int	i;

	i = 0;
	while (i < ps->size)
	{
		if (ps->arr[i] != a->data)
			return (0);
		i++;
		a = a->next;
	}
	return (1);
}

void	sort_array(t_ps *ps)
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

void	ft_check_args(t_ps *ps, char **av, t_stack **head)
{
	int	i;
	int	j;
	int	num;

	i = 1;
	while (av[i])
	{
		ps->args = ft_split(av[i], ' ');
		if (!ps->args[0] || !ps->args)
			ft_print_error();
		j = 0;
		while (ps->args[j])
		{
			num = ft_atoi(ps->args[j]);
			ft_lstadd_back(head, ft_lstnew(&num));
			j++;
		}
		ft_free(ps->args);
		i++;
	}
	ps->size = ft_lstsize(*head);
	ps->arr = malloc(sizeof(int) * ps->size);
	ft_fill_arr(head, ps);
	ft_check_dup(ps);
	sort_array(ps);
}
