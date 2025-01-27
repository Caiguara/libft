#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char *s1, char const *set)
{
	size_t	i;
	size_t	j;

	if (!s1 || !set)
		return (NULL);
	while (s1[i] != '\0')
	{
		i = 0;
		while (set[j] != '\0')
		{
			j = 0;
			if (s1[i + j] == set[j])
				s1[i + j] = 'z';
			j++;
		}
		i++;
	}
	return (s1);
}

int	main(void)
{
	printf("%s\n", ft_strtrim("abcdefghijklm", "fka"));
}