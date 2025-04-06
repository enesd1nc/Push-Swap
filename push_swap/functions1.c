/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdinc <mdinc@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 17:14:22 by mdinc             #+#    #+#             */
/*   Updated: 2025/04/06 17:14:22 by mdinc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"
#include <stdlib.h>

static char	*skip_space(char *str, const char *delim)
{
	while (*str && ft_strchr(delim, *str))
		str++;
	return (str);
}

static char	*my_split(char *str, const char *delim)
{
	static char	*last = NULL;
	char		*start;
	char		*end;

	if (str != NULL)
		last = str;
	if (last == NULL)
		return (NULL);
	start = skip_space(last, delim);
	if (*start == '\0')
	{
		last = NULL;
		return (NULL);
	}
	end = start;
	while (*end && !ft_strchr(delim, *end))
		end++;
	if (*end == '\0')
		last = NULL;
	else
	{
		*end = '\0';
		last = end + 1;
	}
	return (start);
}

void	check_argument(t_stack *stack)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack->size_a)
	{
		j = i + 1;
		while (j < stack->size_a)
		{
			if (stack->a[i] == stack->a[j])
				fault(stack, 0);
			j++;
		}
		i++;
	}
}

void	argument(int ac, char *av[], t_stack *stack)
{
	char	*start;
	int		nbr;
	int		*temp_a;
	int		i;

	i = 1;
	while (i < ac)
	{
		start = my_split(av[i], " ");
		while (start != NULL)
		{
			nbr = my_atoi(start, stack);
			temp_a = malloc((stack->size_a + 1) * sizeof(int));
			if (temp_a == NULL)
				fault(stack, 1);
			ft_memcpy(temp_a, stack->a, stack->size_a * sizeof(int));
			temp_a[stack->size_a] = nbr;
			stack->size_a++;
			free(stack->a);
			stack->a = temp_a;
			start = my_split(NULL, " ");
		}
		i++;
	}
}
