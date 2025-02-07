/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mignacio <mignacio@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:57:49 by mignacio          #+#    #+#             */
/*   Updated: 2025/02/07 17:13:27 by mignacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	howmany_words(char c, const char *s)
{
	int	words;

	words = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			words++;
		while (*s != c && *s)
			s++;
	}
	return (words);
}

static void	free_mem(char **arr, int index)
{
	while (index >= 0)
	{
		free(arr[index]);
		index--;
	}
	free(arr);
}

static char	**result(char const *s, char c, char **arr)
{
	size_t	start;
	size_t	len;
	size_t	index;

	index = 0;
	start = 0;
	while (index < howmany_words(c, s))
	{
		len = 0;
		while (s[start] == c && s[start])
			start++;
		while (s[start + len] != c && s[start + len])
			len++;
		arr[index] = ft_substr(s, start, len);
		if (!arr[index])
		{
			free_mem(arr, index);
			return (NULL);
		}
		index++;
		start += len;
	}
	arr[index] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**splitted;

	if (!s)
		return (NULL);
	splitted = (char **) malloc ((howmany_words(c, s) + 1) * sizeof(char *));
	if (!splitted)
		return (NULL);
	splitted = result(s, c, splitted);
	return (splitted);
}
