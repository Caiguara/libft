#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*strdup(const char *s)
{
	size_t	len;
	char 	*new_s;

	len = strlen(s);
	new_s = malloc(len + 1);
	if (new_s == NULL)
		return (NULL);	
	memcpy(new_s, s, len + 1);
	return (new_s);
}
