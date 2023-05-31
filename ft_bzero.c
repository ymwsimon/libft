#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*sc;

	i = 0;
	sc = s;
	while (i != n)
	{
		sc[i] = 0;
		i++;
	}
}
