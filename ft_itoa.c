/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mignacio <mignacio@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:57:50 by mignacio          #+#    #+#             */
/*   Updated: 2025/02/01 20:11:53 by mignacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	length(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static int	is_negative(int *n, char *str)
{
	if (*n < 0)
	{
		if (*n == -2147483648)
		{
			str[0] = '-';
			str[1] = '2';
			*n = 147483648;
		}
		else
		{
			str[0] = '-';
			*n *= -1;
		}
	}
	return (*n);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = length(n);
	str = (char *) malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (n == 0)
		str[0] = '0';
	else
		is_negative(&n, str);
	while (n > 0)
	{
		str[len] = '0' + (n % 10);
		n /= 10;
		len--;
	}
	return (str);
}
