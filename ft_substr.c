#include "libft.h"

size_t	ft_min(size_t a, size_t b)
{
	if (a > b)
		return (b);
	return (a);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;
	size_t	slen;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	/*if (len && slen && start < slen)
		res = malloc(ft_min(len, slen - start) + 1);
	else
		res = malloc(1);*/
	slen = ft_min(slen, slen - start) + 1;
	res = malloc(ft_min(len, slen) + 1);
	if (res)
	{
		i = 0;
		while (i < len && (start + i) < slen)
		{
			res[i] = s[start + i];
			i++;
		}
		res[i] = 0;
	}
	return (res);
}
