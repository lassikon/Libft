/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkonttin <lkonttin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:50:52 by lkonttin          #+#    #+#             */
/*   Updated: 2023/11/04 16:52:04 by lkonttin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	check_max;

	if (count == 0 || size == 0)
		return (ft_calloc(1, 1));
	check_max = count * size;
	if (count != check_max / size)
		return (NULL);
	ptr = malloc(count * size);
	if (ptr == (NULL))
		return (ptr);
	ft_bzero(ptr, size * count);
	return (ptr);
}
// Checks for (count * size) being over unsigned int max