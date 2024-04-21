/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbazaz <fbazaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 11:01:45 by fbazaz            #+#    #+#             */
/*   Updated: 2024/04/21 14:02:03 by fbazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    join_args(t_ps *ps, char **av)
{
    int i;

    i = 1;
    while (av[i])
    {
        ps->tmp = ft_strjoin(ps->tmp, (ft_strjoin(av[i], " ")));
        i++;
    }
    ps->args = ft_split(ps->tmp, ' ');
    i = 0;
    while (ps->args[i])
    {
        *ps->arr[i] = ft_atoi(ps->args[i]);
        printf("hel\n");
        i++;
    }
}

/* void    check_args(t_ps *ps)
{
    int i;

    i = 0;
    while (ps->args[i])
    {
        if (!ft_isdigit((ps->args)[i]) || ft_repeat(ps, i, ps->args[i]))
            ft_print_error();
    }
} */
