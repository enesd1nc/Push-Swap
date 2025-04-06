/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdinc <mdinc@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 17:36:20 by mdinc             #+#    #+#             */
/*   Updated: 2025/04/06 17:36:21 by mdinc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_ds;
	size_t	len_sr;
	size_t	i;

	len_ds = ft_strlen(dst);
	len_sr = ft_strlen(src);
	i = 0;
	if (dstsize <= len_ds)
		return (dstsize + len_sr);
	while (i + len_ds < dstsize - 1 && src[i] != '\0')
	{
		dst[len_ds + i] = src[i];
		i++;
	}
	dst[len_ds + i] = '\0';
	return (len_ds + len_sr);
}
