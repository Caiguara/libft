/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mignacio <mignacio@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 16:41:29 by mignacio          #+#    #+#             */
/*   Updated: 2025/01/16 16:00:03 by mignacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	src_len;
    size_t  dst_len;

    src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	j = 0;
	if (size == 0)
		return (dst_len + src_len);
	if (size <= dst_len)
    	return (dst_len + src_len);
	while ((src[j] != '\0') && (dst_len +j < size - 1))
	{
		dst[dst_len + j] = src[j];
		j++;
	}
	dst[dst_len + j] = '\0';
	return (dst_len + src_len);
}