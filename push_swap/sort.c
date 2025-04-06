/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdinc <mdinc@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 17:10:39 by mdinc             #+#    #+#             */
/*   Updated: 2025/03/22 17:10:39 by mdinc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_three(t_stack *s)
{
	if (s->a[0] > s->a[1] && s->a[0] > s->a[2])
		ra(s);
	else if (s->a[1] > s->a[0] && s->a[1] > s->a[2])
		rra(s);
	if (s->a[0] > s->a[1])
		sa(s);
}

static void	sort_small(t_stack *stack)
{
	int	min_index;
	int	min_value;

	while (stack->size_a > 3)
	{
		min_index = find_min_digit(stack->a, stack->size_a);
		min_value = stack->a[min_index];
		while (stack->a[0] != min_value)
		{
			if (min_index <= stack->size_a / 2)
				ra(stack);
			else
				rra(stack);
		}
		pb(stack);
	}
	if (stack->size_a == 3)
		sort_three(stack);
	else if (stack->size_a == 2 && stack->a[0] > stack->a[1])
		sa(stack);
	while (stack->size_b > 0)
		pa(stack);
}

void	sort(t_stack *stack)
{
	if (checked_sorted(stack->a, stack->size_a) == 0)
	{
		if (stack->size_a == 2)
			sa(stack);
		else if (stack->size_a == 3)
			sort_three(stack);
		else if (stack->size_a <= 5)
			sort_small(stack);
		else
		{
			mark_stack(stack->a, stack->size_a, stack);
			radix_sort(stack);
		}
	}
}
