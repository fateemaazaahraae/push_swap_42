/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbazaz <fbazaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 11:01:45 by fbazaz            #+#    #+#             */
/*   Updated: 2024/04/26 09:43:27 by fbazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_fill_arr(t_stack **head, t_ps *ps)
{
    int i;

    i = 0;
    while (i < ps->size)
    {
        ps->arr[i] = (*head)->data;
        head = &(*head)->next;
        i++;
    }
}

void    check_args(t_ps *ps, char **av, t_stack **head)
{
    int i;
    int j;
    int num;

    i = 1;
    while (av[i])
    {
            printf("av[1] %s\n", av[1]);
        ps->args = ft_split(av[i], ' ');
            printf("split %s\n", ps->args[0]);
        if (!ps->args[0])
            ft_print_error();
        j = 0;
        while (ps->args[j])
        {
            num = ft_atoi(ps->args[j]);
            ft_lstadd_back(head, ft_lstnew(&num));
            j++;
        }
        i++;
    }
    ps->size = ft_lstsize(*head);
    ps->arr = malloc(sizeof(int) * ps->size);
    ft_fill_arr(head, ps);
    ft_check_dup(ps);
}

























/* #include "push_swap.h"

void check_digit(char **str)
{
    int i;
    int j;

    i = 0;
    while (str[i])
    {
        j = 0;
        while (str[i][j])
        {
            if ((str[i][j] < '0' || str[i][j] > '9') && str[i][j] != '-' && str[i][j] != '+')
                ft_print_error();
            j++;
        }
        i++;
    }
}


void    join_args(t_ps *ps, char **av, int ac)
{
    int i;
    int j;
    (void)ac;

    i = 1;
    while (av[i])
    {
        j = 0;
        if (!av[i][0])
            ft_print_error();
        ps->tmp = ft_strjoin(ps->tmp, (ft_strjoin(av[i], " ")));
        i++;
    }
    ps->args = ft_split(ps->tmp, ' ');
    printf("%s\n", ps->args[0]);
    printf("%s\n", ps->args[1]);
    printf("%s\n", ps->args[2]);
    printf("%s\n", ps->args[3]);
    printf("%s\n", ps->args[4]);
    free(ps->tmp);
    while (ps->args[ps->size])
        ps->size++;
    i = 0;
    while (i < ps->size)
    {
        if (ps->args[i] == NULL)
            ft_print_error();
        i++;
    }
    check_sign(ps->args);
    check_digit(ps->args);
    i = 0;
    ps->arr = malloc(sizeof(long) * (ps->size));
    while (ps->args[i])
    {
        ps->arr[i] = ft_atoi(ps->args[i]);
        i++;
    }
}

void    check_args(t_ps *ps)
{
    int i;

    i = 0;
    while (i < ps->size)
    {
        if (ft_repeat(ps, i, ps->arr[i]) == 1 || ps->arr[i] > INT_MAX || ps->arr[i] < INT_MIN)
            ft_print_error();
        i++;
    }
} */
