/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mignacio <mignacio@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 12:21:05 by mignacio          #+#    #+#             */
/*   Updated: 2025/01/29 14:50:47 by mignacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return ((char *) ft_calloc(1, sizeof(char)));
	if (len + start > s_len)
		len = s_len - start;
	substring = (char *) ft_calloc(len + 1, sizeof(char));
	if (substring == NULL)
		return (NULL);
	ft_memmove(substring, s + start, len);
	return (substring);
}
