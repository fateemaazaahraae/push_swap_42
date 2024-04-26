/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbazaz <fbazaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 20:37:17 by fbazaz            #+#    #+#             */
/*   Updated: 2024/04/25 13:57:27 by fbazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    rotate(t_stack **s)
{
    t_stack *last;
    t_stack *tmp;

    last = ft_lstlast(*s);
    tmp = *s;
    last->next = *s;
    (*s) = tmp->next;
    (last->next)->next = NULL;
}

void    rotate_a(t_stack **s)
{
    if (!s)
        return ;
    rotate(s);
    write(1, "ra\n", 3);
}

void    rotate_b(t_stack **s)
{
    if (!s)
        return ;
    rotate(s);
    write(1, "rb\n", 3);
}

void    rotate_ab(t_stack **a, t_stack **b)
{
    if (!a || !b)
        return ;
    rotate(a);
    rotate(b);
    write(1, "rr\n", 3);
}