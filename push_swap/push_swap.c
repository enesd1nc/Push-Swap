/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdinc <mdinc@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 17:10:14 by mdinc             #+#    #+#             */
/*   Updated: 2025/03/22 17:10:14 by mdinc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

static void	start_process(t_stack *stack)
{
	stack->b = malloc(stack->size_a * sizeof(int));
	if (stack->b == NULL)
		fault(stack, 1);
	sort(stack);
	free(stack->a);
	free(stack->b);
}

int	main(int ac, char *av[])
{
	t_stack	stack;

	stack.a = NULL;
	stack.b = NULL;
	stack.size_a = 0;
	stack.size_b = 0;
	argument(ac, av, &stack);
	check_argument(&stack);
	start_process(&stack);
	return (0);
}
