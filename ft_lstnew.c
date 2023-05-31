#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*n;

	n = malloc(sizeof(t_list));
	if (n)
	{
		n -> content = content;
		n -> next = 0;
	}
	return (n);
}
