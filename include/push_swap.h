/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:50:44 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2023/11/03 15:32:03 by fdiaz-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdlib.h>
# include "../libft/libft.h"
# include "../libft/ft_printf.h"
# include "../libft/get_next_line.h"

typedef struct s_stack
{
    int		value;
    struct s_stack *next;
}t_stack;


int	check_nb_in_argv(char **str, t_stack *stack_A);
t_stack	*ft_get_penultimate(t_stack *stack);
void order_three(t_stack **stack_a);
void	ft_sa(t_stack **stack_a);
void	ft_sb(t_stack **stack_b);
void	ft_ss(t_stack **stack_a, t_stack **stack_b);
void    ft_ra(t_stack **stack_a);
void    ft_rb(t_stack **stack_b);
void    ft_rr(t_stack **stack_a, t_stack **stack_b);
void    ft_rra(t_stack **stack_a);
void    ft_rrb(t_stack **stack_b);
void    ft_rrr(t_stack **stack_a, t_stack **stack_b);
void    ft_pa(t_stack **stack_a, t_stack **stack_b);
void    ft_pb(t_stack **stack_a, t_stack **stack_b);
int	check_nb_in_argv(char **str, t_stack *stack_a);
int	check_duplicated(t_stack *stack_a);
int check_and_save(char *str, t_stack *first_node);
int	check_if_nb(char *str);
