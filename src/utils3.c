/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:58:09 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2023/11/17 12:57:17 by fdiaz-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int find_min(t_stack **stack)
{
	int	min;

	min = (*stack)->value;
	while ((*stack))
	{
		if (min > (*stack)->value)
			min = (*stack)->value;
		stack = &(*stack)->next;
	}
	// ft_printf("find_min:%i\n", min);
	return (min);
}

int find_max(t_stack **stack)
{
	int	max;

	max = (*stack)->value;
	while ((*stack))
	{
		if (max < (*stack)->value)
			max = (*stack)->value;
		stack = &(*stack)->next;
	}
	// ft_printf("find_max:%i\n", max);
	return (max);
}

int	ft_lstsize_ps(t_stack **stack)
{
	int	i;

	i = 0;
	while ((*stack))
	{
		stack = &(*stack) -> next;
		i++;
	}
	return (i);
}
int	find_pos_index(t_stack **stack, int nb)
{
    int pos;    
	
	pos = 1;	
    while ((stack))
    {
        if ((*stack)->index == nb)
            break;

        pos++;
        stack = &(*stack)->next;		
    }	
    return (pos);
}

int	find_pos_value(t_stack **stack, int nb)
{
    int pos;    
	
	pos = 1;	
    while ((stack))
    {
        if ((*stack)->value == nb)
            break;

        pos++;
        stack = &(*stack)->next;		
    }	
    return (pos);
}