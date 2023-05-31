#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*ss;

	i = 0;
	ss = s;
	while (i < n)
	{
		if (ss[i] == (char)c)
			return ((void *)&ss[i]);
		i++;
	}
	return (0);
}
