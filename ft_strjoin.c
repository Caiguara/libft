/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mignacio <mignacio@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 14:30:39 by mignacio          #+#    #+#             */
/*   Updated: 2025/01/27 15:10:36 by mignacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*new_s;

	if (!s1 || !s2)
		return (NULL);
	s1_len = strlen(s1);
	s2_len = strlen(s2);
	new_s = calloc((s1_len + s2_len + 1), sizeof (char));
	if (new_s == NULL)
		return (NULL);
	memcpy(new_s, s1, s1_len);
	memcpy(new_s + s1_len, s2, s2_len);
	new_s[s1_len + s2_len] = '\0';
	return (new_s);
}
