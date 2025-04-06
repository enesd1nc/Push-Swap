/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdinc <mdinc@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 17:14:11 by mdinc             #+#    #+#             */
/*   Updated: 2025/04/06 17:14:11 by mdinc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>
#include <stdlib.h>

void	fault(t_stack *stack, int i)
{
	if (stack->a != NULL)
		free(stack->a);
	if (stack->b != NULL)
		free(stack->b);
	write(2, "Error\n", 6);
	if (i == 1)
		write(2, "Error\n", 6);
	exit(-1);
}

int	my_atoi(char *str, t_stack *stack)
{
	int					m;
	int					i;
	unsigned long int	s;

	m = 1;
	i = 0;
	s = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		m *= -1;
	if ((str[i] == '-' || str[i] == '+') && !(str[++i] >= '0' && str[i] <= '9'))
		fault(stack, 0);
	if (str[i] == 0)
		fault(stack, 0);
	while (str[i])
	{
		if (str[i] > '9' || str[i] < '0')
			fault(stack, 0);
		s = (str[i++] - 48) + (s * 10);
	}
	if ((s > 2147483647 && m == 1) || (s > 2147483648 && m == -1))
		fault(stack, 0);
	return (s * m);
}

int	checked_sorted(int *stack_a, int size)
{
	int	i;

	i = 1;
	while (i < size)
	{
		if (stack_a[i - 1] > stack_a[i])
			return (0);
		i++;
	}
	return (1);
}
