#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*t;

	if (lst && del)
	{
		t = *lst;
		while (*lst)
		{
			t = *lst;
			*lst = (*lst)->next;
			del(t->content);
			free(t);
		}
		*lst = 0;
	}
}
