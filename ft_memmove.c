#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	if (s && d && s > d)
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else if (s && d && s <= d)
	{
		i = n - 1;
		while (i < n)
		{
			d[i] = s[i];
			i--;
		}
	}
	return (dest);
}
