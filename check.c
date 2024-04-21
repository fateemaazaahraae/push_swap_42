/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbazaz <fbazaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 11:53:50 by fbazaz            #+#    #+#             */
/*   Updated: 2024/04/21 12:06:14 by fbazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_print_error()
{
    write(1, "Error\n", 6);
    exit(1);
}

int ft_repeat(t_ps *ps, int i, char *num)
{
    i++;
    while (ps->args[i])
    {
        if (ft_strcmp(ps->args[i], num))
            return (1);
        i++;
    }
    return (0);
}