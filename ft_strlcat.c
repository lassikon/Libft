/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkonttin <lkonttin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 12:13:57 by lkonttin          #+#    #+#             */
/*   Updated: 2023/11/03 10:27:10 by lkonttin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d;
	size_t	s;

	d = 0;
	s = 0;
	if (dstsize == 0)
	{
		return (ft_strlen(src));
	}
	while (dst[d] && d < dstsize)
	{
		d++;
	}
	while ((d + s + 1) < dstsize && src[s])
	{
		dst[d + s] = src[s];
		s++;
	}
	if (d != dstsize)
	{
		dst[d + s] = '\0';
	}
	return (d + ft_strlen(src));
}
