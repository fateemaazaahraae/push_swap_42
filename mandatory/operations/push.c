/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbazaz <fbazaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 20:36:55 by fbazaz            #+#    #+#             */
/*   Updated: 2024/04/25 11:32:54 by fbazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    push(t_stack **a, t_stack **b)
{
    t_stack *tmp;
    
    tmp = (*a)->next;
    (*a)->next = *b;
    *b = *a;
    *a = tmp;                                             
}

void    push_a(t_stack **a, t_stack **b)
{
    if (!a || !b)
        return ;
    push(a, b);
    write(1, "pa\n", 3);
}

void    push_b(t_stack **a, t_stack **b)
{
    if (!a || !b)
        return ;
    push(b, a);
    write(1, "pb\n", 3);
}