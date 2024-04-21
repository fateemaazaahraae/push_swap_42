/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbazaz <fbazaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 10:22:15 by fbazaz            #+#    #+#             */
/*   Updated: 2024/04/21 13:48:33 by fbazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int ac, char **av)
{
    t_ps    ps;

    if (ac < 2)
        ft_print_error("Error\n");
    join_args(&ps, av);
    //printf("%s\n", ps.tmp);
    /* for (int j = 0; ps.args[j]; j++)
        printf("%s\n", ps.args[j]); */
    for (int j = 0; ps.arr[j]; j++)
        printf("***%li\n", *ps.arr[j]);
    //check_args(&ps);
}
