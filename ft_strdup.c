/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkonttin <lkonttin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:03:39 by lkonttin          #+#    #+#             */
/*   Updated: 2023/10/30 16:40:01 by lkonttin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	s1_len;

	s1_len = ft_strlen(s1);
	ptr = (char *) malloc(sizeof(char) * (s1_len + 1));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1, s1_len + 1);
	return (ptr);
}
