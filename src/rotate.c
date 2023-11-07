/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:00:10 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2023/11/02 11:00:58 by fdiaz-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int rotate(t_stack **stack)
{
    t_stack *aux;
    t_stack *last;

    aux = *stack;
    *stack = (*stack)->next;
    last = ft_lstlast(*stack);
    aux->next = NULL;
    last->next = aux;
}

void    ft_ra(t_stack **stack_a)
{
    rotate(stack_a);
    ft_printf("%s", "ra");
}

void    ft_rb(t_stack **stack_b)
{
    rotate(stack_b);
    ft_printf("%s", "rb");
}

void    ft_rr(t_stack **stack_a, t_stack **stack_b)
{
    rotate(stack_a);
    rotate(stack_b);
    ft_printf("%s", "rr");
}