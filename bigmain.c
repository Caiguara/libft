# include "libft.h"
# include <stdio.h>
# include <string.h>
# include <strings.h>

void	*copy_lst(void *str)
{
	return(ft_strdup((char *)str));
}


void	print_nodos(void *content)
{
	printf("%s\n", (char *) content);
}

void A_upper(void *c)
{
	char	*str = (char *) c;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')	
			*str = *str - 32;
		str++;
	}
}

char	to_upper(unsigned int i, char c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

void	to_lower(unsigned int i, char *c)
{
	if (*c >= 'A' && *c <= 'Z')
		*c = *c + 32;
}

void	free_content(void	*content)
{
	free(content);
	printf("Liberado nodo\n");
}


int	main(void)
{
	printf("--------ATOI--------\n");
	printf("ft_Propia: %d\n", ft_atoi("2147483649"));
	printf("Original:  %d\n", atoi("2147483649"));


	printf("\n--------BZERO--------\nAntes de bzero: ");
	char	bze[] = "123456";
	int		n = 6;
	for (int i = 0; i < n; i++)
		printf("%d ", bze[i]);
	ft_bzero(bze, n);
	printf("\nDespués de bzero: ");
	for (int i = 0; i < n; i++)
		printf("%d ", bze[i]);


	printf("\n\n--------CALLOC--------\n");
	int		*my_calloc = ft_calloc(10, 1);
	n = 10;
	for (int i = 0; i < n; i++)
	{
		printf("%d ", my_calloc[i]);
	}
	printf("\n");
	int		*orig_calloc = calloc(10, 1);
	for (int i = 0; i < n; i++)
		printf("%d ", orig_calloc[i]);
	printf("\n");


	printf("\n--------ISALNUM--------\n");
	printf("Boolean, 0 es falso, 1 es True: %d\n",ft_isalnum('A'));


	printf("\n--------ITOA--------\n");
	printf("%s\n\n", ft_itoa(-2147483648));
	

	printf("--------MEMCHR.C--------\n");
	const unsigned char	smemchr[] = "abcdefg";
	n = 7;
	printf("%s\n", smemchr);
	printf("%s\n\n", (char *) ft_memchr(smemchr, 'c', n));


	printf("--------MEMCMP.C--------\n");
	const char	*s1cmp = "abcdef9ab";
	const char	*s2cmp = "abcdef0ab";
	printf("%d\n", ft_memcmp(s1cmp, s2cmp, 8));


	printf("\n--------MEMCPY--------\n");
	unsigned char	destmemcpy[] = "abcde World!";
	const char	*srccpy = "Hello 123";
	n = 5;
	ft_memcpy(destmemcpy, srccpy, n);
	/*ft_memcpy(srccpy + 3, srccpy, n);*/
	printf("%s\n", destmemcpy);


	printf("\n--------MEMMOVE--------\n");
	char			destmove[12];
	unsigned char	strmove[] = "abcdefghijk";
	size_t	i = 3;
	ft_memmove(destmove, strmove, 8);
	ft_memmove(strmove + 3, strmove, i);
	printf("%s\n", destmove);
	printf("%s\n", strmove);


	printf("\n--------MEMSET--------\n");
	char	strspl[] = "efghij";
	n = 6;
	for (int i = 0; i < n; i++)
		printf("%d ", strspl[i]);
	printf("\n");
	ft_memset(strspl, 'b', 5);
	for (int i = 0; i < n; i++)
		printf("%d ", strspl[i]);


	printf("\n--------putendl--------\n");
	ft_putendl_fd("abc", 1);


	printf("\n--------split--------\n");
	char	**resultsplit;
	resultsplit = ft_split("a b c d e", ' ');
	i = 0;
	while (resultsplit[i])
	{
		printf("Palabra %lu: %s\n", i + 1, resultsplit[i]);
		free(resultsplit[i]);
		i++;
	}
	free(resultsplit);


	printf("\n--------strchr--------\n");
	const char *strdelchr = "abcdef";
	printf("%s\n", ft_strchr(strdelchr, 'c'));
	printf("%s\n", strchr(strdelchr, 'c'));
	

	printf("\n--------strdup--------\n");
	const char	*s1dup = "abcdef";
	char	*new_sdup = strdup(s1dup);
	printf("%s\n", new_sdup);


	printf("\n--------strteri--------\n");
	char	s[] = "ABCDEFGH";
	ft_striteri(s, to_lower);
	printf("%s\n", s);


	printf("\n--------strjoin--------\n");
	char const	*s1join = "Hello ";
	char const	*s2join = "World!";
	printf("%s\n", ft_strjoin(s1join, s2join));


	printf("\n--------strlcat--------\n");
	char	destcat [] = "abcde";
	const char	*srccat = "fghijk";
	printf("%zu\n", ft_strlcat(destcat, srccat, 7));
	printf("%s\n", destcat);


	printf("\n--------strmapi--------\n");
	char const *smapi = "abcdefg";
	printf("%s\n", ft_strmapi(smapi, to_upper));


	printf("\n--------strnstr--------\n");
	const char	*big = "abcdefghijklm";
	const char	*little = "fghi";
	printf("%s\n", ft_strnstr(big, little, 12));


	printf("\n--------strrchr--------\n");
	const char	*s1rrchr = "abcdef";
	printf("%s\n", ft_strrchr(s1rrchr, 'c'));


	printf("\n--------strtrim--------\n");
	char	s1trim[] = "aaabccdbcHello World!bbdddcaacb";
	char const	*set = "abcd";
	printf("%s\n", ft_strtrim(s1trim, set));


	printf("\n--------substr--------\n");
	char const 		*strsub = "0123456789";
	unsigned int	startsub = 4;
	size_t			lensub = 3;
	printf("%s\n", ft_substr(strsub, startsub, lensub));


	printf("------------------------BONUS------------------------");

	printf("\n--------ft_lstnew--------\n");
	t_list	*lst = NULL;
	char	*str1 = ft_strdup("Hello");
	char	*str2 = ft_strdup("World");
	char	*str3 = ft_strdup("!!!!!");
	t_list *nodo1 = ft_lstnew (str1);
	t_list *nodo2 = ft_lstnew (str2);
	t_list *nodo3 = ft_lstnew (str3);
	printf("%s\n", (char *)nodo1 -> content);


	printf("\n--------ft_lstadd_front--------\n");
	ft_lstadd_front(&lst, nodo3);
	ft_lstadd_front(&lst, nodo2);
	ft_lstadd_front(&lst, nodo1);
	printf("%s\n", (char *)lst -> content);


	printf("\n--------ft_lstsize--------\n");
	printf("Número de nodos: %d\n", ft_lstsize(lst));


	printf("\n--------ft_lstlast--------\n");
	t_list	*last_node = ft_lstlast(lst);
	printf("%s\n", (char *) last_node -> content);


	printf("\n--------ft_delone--------\n");
	/*ft_lstdelone(last_node, free_content);*/


	printf("\n--------ft_clear--------\n");
	/*ft_lstclear(&lst, free_content);*/

	printf("\n--------ft_lstiter--------\n");
	ft_lstiter(lst, A_upper);
	ft_lstiter(lst, print_nodos);

	printf("\n--------ft_lstmap--------\n");
	ft_lstmap(lst, copy_lst, free_content);
	ft_lstiter(lst, print_nodos);
}
