/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkonttin <lkonttin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:03:43 by lkonttin          #+#    #+#             */
/*   Updated: 2023/10/30 17:31:33 by lkonttin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	d;
	size_t	s;
	char	*ptr;

	ptr = (char *) malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!ptr)
		return (NULL);
	d = 0;
	while (s1[d])
	{
		ptr[d] = s1[d];
		d++;
	}
	s = 0;
	while (s2[s])
	{
		ptr[d + s] = s2[s];
		s++;
	}
	ptr[d + s] = '\0';
	return (ptr);
}
