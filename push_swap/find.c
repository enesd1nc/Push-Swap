/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdinc <mdinc@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 17:12:29 by mdinc             #+#    #+#             */
/*   Updated: 2025/04/06 17:12:29 by mdinc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find_min_digit(int *array, int size)
{
	int	i;
	int	min;
	int	j;

	i = 1;
	j = 0;
	min = array[0];
	while (i < size)
	{
		if (array[i] < min)
		{
			min = array[i];
			j = i;
		}
		i++;
	}
	return (j);
}
