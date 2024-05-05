/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbazaz <fbazaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 09:51:47 by fbazaz            #+#    #+#             */
/*   Updated: 2024/05/05 17:13:23 by fbazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	do_operations(char *op, t_stack **a, t_stack **b)
{
	if (ft_strcmp(op, "pa\n") == 0)
		pa(a, b);
	else if (ft_strcmp(op, "pb\n") == 0)
		pb(a, b);
	else if (ft_strcmp(op, "sa\n") == 0)
		sa(a);
	else if (ft_strcmp(op, "sb\n") == 0)
		sb(b);
	else if (ft_strcmp(op, "ss\n") == 0)
		ss(a, b);
	else if (ft_strcmp(op, "ra\n") == 0)
		ra(a);
	else if (ft_strcmp(op, "rb\n") == 0)
		rb(b);
	else if (ft_strcmp(op, "rr\n") == 0)
		rr(a, b);
	else if (ft_strcmp(op, "rra\n") == 0)
		rra(a);
	else if (ft_strcmp(op, "rrb\n") == 0)
		rrb(b);
	else if (ft_strcmp(op, "rrr\n") == 0)
		rrr(a, b);
	else
		ft_print_error();
}

void	read_operations(t_stack **a, t_stack **b, t_ps *ps)
{
	char	*line;

	(void)ps;
	while (1)
	{
		line = get_next_line(0);
		if (!line)
			break ;
		do_operations(line, a, b);
		free(line);
	}
	if (ft_check_if_sorted(ps, *a) && !(*b))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
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
	ft_check_args(&ps, av, &a);
	read_operations(&a, &b, &ps);
	free(ps.arr);
}
