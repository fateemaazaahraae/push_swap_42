/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbazaz <fbazaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 10:22:28 by fbazaz            #+#    #+#             */
/*   Updated: 2024/04/21 13:50:42 by fbazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct push_swap
{
    char *tab;
    char *tmp;
    char **args;
    long **arr;
}   t_ps;

void    join_args(t_ps *ps, char **av);
void    check_args(t_ps *ps);
int     ft_print_error();
int     ft_repeat(t_ps *ps, int i, char *num);

// utils
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *src);
size_t	ft_strlen(const char *s);
char	**ft_split(char const *s, char c);
int     ft_strcmp(const char *s1, const char *s2);
int	    ft_isdigit(int c);
long	    ft_atoi(char *str);


#endif