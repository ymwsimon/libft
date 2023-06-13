#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (dst && src)
	{
		while (i < size - 1 && size && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		if (size)
			dst[i] = 0;
		while (src[i])
			i++;
	}
	else if (src)
	{
		while (src[i])
			i++;
	}
	return (i);
}
