/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mignacio <mignacio@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 20:26:01 by mignacio          #+#    #+#             */
/*   Updated: 2025/02/07 17:12:28 by mignacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			total;
	unsigned char	*s;
	size_t			i;

	i = 0;
	total = nmemb * size;
	s = malloc(total);
	if (s == NULL)
		return (NULL);
	while (i < total)
	{
		s[i] = 0;
		i++;
	}
	return (s);
}
