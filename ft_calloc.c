#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*t;
	size_t	i;

	t = 0;
	if (nmemb * size >= size)
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
