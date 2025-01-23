/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mignacio <mignacio@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:43:08 by mignacio          #+#    #+#             */
/*   Updated: 2025/01/23 14:32:59 by mignacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	len;

	len = strlen(str);
	while (len >= 0)
	{
		if (str[len] == (char) c)
			return ((char *)&str[len]);
		len--;
	}
	return (NULL);
}
