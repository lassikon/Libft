/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkonttin <lkonttin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:07:06 by lkonttin          #+#    #+#             */
/*   Updated: 2023/10/30 14:57:48 by lkonttin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char	*source;
	size_t	i;

	source = (char *)src;
	i = 0;
	if (dstsize == 0)
	{
		return (ft_strlen(src));
	}
	while (i < (dstsize - 1) && source[i] != '\0')
	{
		dst[i] = source[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
