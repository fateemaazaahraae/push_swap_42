/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbazaz <fbazaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 10:22:15 by fbazaz            #+#    #+#             */
/*   Updated: 2024/04/26 09:38:39 by fbazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int ac, char **av)
{
    t_ps    ps;
    t_stack *a;
    t_stack *head_a;
    t_stack *b;
    t_stack *head_b;
    
    if (ac < 2)
        ft_print_error("Error\n");
    a = NULL;
    head_a = a;
    b = NULL;
    head_b = b;
    check_args(&ps, av, &head_a);
    // push_a(&head_a, &head_b);
    // push_a(&head_a, &head_b);
    // push_a(&head_a, &head_b);
    //push_b(&head_a, &head_b);
    //swap_b(&head_b);
    // rotate_a(&head_a);
    // rotate_b(&head_b);
    // reverse_rotate_a(&head_a);
    // reverse_rotate_b(&head_b);
    while (head_a)
    {
        printf("a - %i\n", head_a->data);
        // printf("b - %i\n", head_b->data);
        head_a = (*head_a).next;
        // head_b = (*head_b).next;
    }
    printf("kolchi mzn\n");
}
