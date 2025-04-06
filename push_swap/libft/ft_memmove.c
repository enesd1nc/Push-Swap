/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdinc <mdinc@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 17:34:42 by mdinc             #+#    #+#             */
/*   Updated: 2025/04/06 17:34:44 by mdinc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	const unsigned char	*sr;
	unsigned char		*ds;

	i = len;
	ds = (unsigned char *)dst;
	sr = (const unsigned char *)src;
	if (dst == src)
		return (dst);
	else if (ds > sr)
	{
		while (i > 0)
		{
			i--;
			ds[i] = sr[i];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (ds);
}
