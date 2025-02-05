#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*new_s;

	len = strlen(s);
	new_s = malloc(len + 1);
	if (new_s == NULL)
		return (NULL);
	memcpy(new_s, s, len + 1);
	return (new_s);
}

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *) malloc (sizeof(t_list));
	if (!new)
		return (NULL);
	new -> content = content;
	new -> next = NULL;
	return (new);
}

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	if (!lst)
		return (NULL);
	temp = lst;
	while (temp -> next)
		temp = temp -> next;
	return (temp);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	last = ft_lstlast(*lst);
	if (!last)
	{
		*lst = new;
		return ;
	}
	last -> next = new;
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

void	ft_lstiter(t_list *lst, void(*f)(void *))
{
	if (!lst || !f)
		return ;	
	while (lst)
	{
		f(lst -> content);
		lst = lst -> next;
	}
}

int	main(void)
{
	t_list	*lst = NULL;
	char	*str1 = ft_strdup("Hello");
	char	*str2 = ft_strdup("World!");
	char	*str3 = ft_strdup("Hola");
	char	*str4 = ft_strdup("Mundo");
	t_list	*nodo1 = ft_lstnew(str1);
	t_list	*nodo2 = ft_lstnew(str2);
	t_list	*nodo3 = ft_lstnew(str3);
	t_list	*nodo4 = ft_lstnew(str4);

	ft_lstadd_back(&lst, nodo2);
	ft_lstadd_back(&lst, nodo3);
	ft_lstadd_back(&lst, nodo4);
	ft_lstiter(nodo1, A_upper);
	ft_lstiter(lst, print_nodos);
	printf("----------------Lista--------------------------------\n");
	ft_lstiter(lst, A_upper);
	ft_lstiter(lst,print_nodos);

}