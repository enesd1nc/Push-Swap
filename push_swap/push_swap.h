/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdinc <mdinc@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 17:10:21 by mdinc             #+#    #+#             */
/*   Updated: 2025/03/22 17:10:21 by mdinc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_stack
{
	int	*a;
	int	*b;
	int	size_a;
	int	size_b;
}	t_stack;

void	fault(t_stack *stack, int i);
int		my_atoi(char *str, t_stack *stack);
void	argument(int ac, char *av[], t_stack *stack);
void	check_argument(t_stack *stack);

void	sa(t_stack *stack);
void	rra(t_stack *stack);
void	ra(t_stack *stack);
void	pa(t_stack *stack);
void	pb(t_stack *stack);
void	rb(t_stack *stack);

void	mark_stack(int *stack, int size, t_stack *s);
void	radix_sort(t_stack *stack);
int		checked_sorted(int *stack_a, int size);
void	sort(t_stack *stack);
int		find_min_digit(int *array, int size);

#endif
