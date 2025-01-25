#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str_ptr;

	str_ptr = (const unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (str_ptr[i] == (unsigned char) c)
			return ((unsigned char *)&str_ptr[i]);
		i++;
	}
	if (c == '\0')
		return	((unsigned char *)&str_ptr[i]);
	return (NULL);
}

int main(void)
{
	const unsigned char	*s;
	size_t	n = 6;
	size_t	i = 0;
	while (i < n)
	{
		printf("%c", s[i]);
		i++;
	}
	
}