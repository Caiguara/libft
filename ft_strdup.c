/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mignacio <mignacio@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 12:20:09 by mignacio          #+#    #+#             */
/*   Updated: 2025/01/29 14:18:40 by mignacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*strdup(const char *s)
{
	size_t	len;
	char	*new_s;

	len = ft_strlen(s);
	new_s = malloc(len + 1);
	if (new_s == NULL)
		return (NULL);
	ft_memcpy(new_s, s, len + 1);
	return (new_s);
}
