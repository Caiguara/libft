/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mignacio <mignacio@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 15:17:56 by mignacio          #+#    #+#             */
/*   Updated: 2025/02/07 17:13:19 by mignacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str_ptr;

	str_ptr = (const unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (str_ptr[i] == (unsigned char) c)
			return ((void *)&str_ptr[i]);
		i++;
	}
	return (NULL);
}
