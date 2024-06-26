/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbazaz <fbazaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 11:53:50 by fbazaz            #+#    #+#             */
/*   Updated: 2024/05/05 16:51:46 by fbazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mandatory/push_swap.h"

int	ft_print_error(void)
{
	write(1, "Error\n", 6);
	system("leaks push_swap");
	exit(1);
}

void	swap_int(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_check_dup(t_ps *ps)
{
	int	i;
	int	j;

	i = 0;
	while (i < ps->size)
	{
		j = i + 1;
		while (j < ps->size)
		{
			if (ps->arr[i] == ps->arr[j])
				ft_print_error();
			j++;
		}
		i++;
	}
}

void	check_sign(char *str)
{
	int	i;
	int	plus;
	int	minus;

	i = 0;
	plus = 0;
	minus = 0;
	while (str[i])
	{
		if (str[i] == '-')
			minus++;
		if (str[i] == '+')
			plus++;
		if (((str[i] == '-' || str[i] == '+') && ((!str[i + 1]) || i != 0))
			|| plus > 1 || minus > 1)
			ft_print_error();
		i++;
	}
}

void	check_digit(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < '0' || str[i] > '9') && str[i] != '-' && str[i] != '+')
			ft_print_error();
		i++;
	}
}
