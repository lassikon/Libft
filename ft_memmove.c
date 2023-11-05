/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkonttin <lkonttin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:39:34 by lkonttin          #+#    #+#             */
/*   Updated: 2023/10/30 14:57:20 by lkonttin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*source;
	size_t			i;

	if (dst == (NULL) && src == (NULL))
	{
		return (dst);
	}
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (dst > src)
	{
		i = len;
		while (i > 0)
		{
			dest[i - 1] = source[i - 1];
			i--;
		}
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}
