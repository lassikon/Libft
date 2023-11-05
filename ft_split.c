/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkonttin <lkonttin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:52:56 by lkonttin          #+#    #+#             */
/*   Updated: 2023/11/02 12:32:31 by lkonttin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_array(char **array, size_t index)
{
	while (index >= 0)
	{
		free(array[index]);
		index--;
	}
	free(array);
}

static size_t	substr_count(const char *s, char c)
{
	size_t	count;
	size_t	i;
	int		in_substr;

	count = 0;
	i = 0;
	in_substr = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			in_substr = 0;
		else if (in_substr == 0)
		{
			in_substr = 1;
			count++;
		}
		i++;
	}
	return (count);
}

size_t	substr_len(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (i);
}

static char	**array_creator(const char *s, char c, char **array)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (s[i] != '\0' && k < substr_count(s, c))
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			array[k] = ft_substr(s, i, substr_len(&s[i], c));
			if (!array[k])
			{
				free_array(array, k - 1);
				return (NULL);
			}
			i = i + substr_len(&s[i], c);
		}
		k++;
	}
	array[k] = (NULL);
	return (array);
}

char	**ft_split(const char *s, char c)
{
	char	**array;

	if (!s)
		return (NULL);
	array = (char **) malloc (sizeof(char *) * (substr_count(s, c) + 1));
	if (!array)
		return (NULL);
	if (!array_creator(s, c, array))
		return (NULL);
	return (array);
}
