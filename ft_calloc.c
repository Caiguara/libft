/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mignacio <mignacio@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 20:26:01 by mignacio          #+#    #+#             */
/*   Updated: 2025/01/25 20:26:35 by mignacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	void	*s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total = nmemb * size;
	s = malloc(total);
	if (s == NULL)
		return (NULL);
	ft_memset(s, 0, total);
	return (s);
}
