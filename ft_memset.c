#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*si;

	i = 0;
	si = s;
	while (i < n)
	{
		si[i] = c;
		i++;
	}
	return (s);
}
