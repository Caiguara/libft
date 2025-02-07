/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mignacio <mignacio@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 17:11:24 by mignacio          #+#    #+#             */
/*   Updated: 2025/02/07 17:13:22 by mignacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char			*dest_ptr;
	const unsigned char		*src_ptr;

	dest_ptr = (unsigned char *) dest;
	src_ptr = (const unsigned char *) src;
	if (dest_ptr == src_ptr)
		return (dest);
	if (dest_ptr > src_ptr && dest_ptr < src_ptr + n)
	{
		while (n > 0)
		{
			n--;
			dest_ptr[n] = src_ptr[n];
		}
	}
	else
		return (ft_memcpy(dest, src, n));
	return (dest);
}
