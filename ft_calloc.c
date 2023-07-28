#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*t;
	size_t	i;
	const uint maxsize = -1;

	t = 0;
	if ((nmemb <= maxsize || size <= maxsize) && nmemb * size <= maxsize)
		t = malloc(nmemb * size);
	i = 0;
	if (t)
	{
		while (i < (nmemb * size))
		{
			t[i] = 0;
			i++;
		}
	}
	return (t);
}
