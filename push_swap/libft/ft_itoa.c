/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdinc <mdinc@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 17:34:12 by mdinc             #+#    #+#             */
/*   Updated: 2025/04/06 17:34:12 by mdinc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	n_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	size_t	len;
	long	num;

	len = n_len(n);
	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	num = n;
	if (num < 0)
	{
		ptr[0] = '-';
		num = -num;
	}
	if (num == 0)
		ptr[0] = '0';
	while (num > 0)
	{
		ptr[--len] = (num % 10) + '0';
		num /= 10;
	}
	return (ptr);
}
