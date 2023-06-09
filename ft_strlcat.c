#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < size && dst[i])
		i++;
	j = 0;
	while (size && (i + j) < (size - 1) && src[j])
	{
		dst[i + j] = src[j];
		j++;
	}
	if ((i + j) < size)
		dst[i + j] = 0;
	while (src[j])
		j++;
	return (i + j);
}
