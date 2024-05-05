/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbazaz <fbazaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 10:22:15 by fbazaz            #+#    #+#             */
/*   Updated: 2024/05/05 16:53:40 by fbazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	which_algo(t_stack **a, t_stack **b, t_ps *ps)
{
	if (ps->size == 2)
		sort_2(a);
	else if (ps->size == 3)
		sort_3(a);
	else if (ps->size == 4 || ps->size == 5)
		sort_5(a, b, ps->size);
	else
	{
		ft_sort(a, b, ps);
		ft_sort2(a, b);
	}
}

int	main(int ac, char **av)
{
	t_ps	ps;
	t_stack	*a;
	t_stack	*b;

	if (ac < 2)
		ft_print_error();
	a = NULL;
	b = NULL;
	check_args(&ps, av, &a);
	which_algo(&a, &b, &ps);
	free(ps.arr);
}
