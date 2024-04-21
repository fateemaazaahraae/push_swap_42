/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbazaz <fbazaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:13:47 by fbazaz            #+#    #+#             */
/*   Updated: 2024/04/21 13:59:03 by fbazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* long	ft_atoi(char *str)
{
	int		i;
	long	result;
	int		sign;
	
	i = 0;
	result = 0;
	sign = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
} */
long	ft_atoi(char *str)
{
	int		i;
	int	r;
	int		sign;

	i = 0;
	r = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = (r * 10) + (str[i] - 48);
		i++;
	}
	system("leaks a.out");
	// printf("%li\n", r * sign);
	return ((long)(r * sign));
}
