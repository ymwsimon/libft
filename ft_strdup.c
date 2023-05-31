#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*t;

	i = 0;
	t = 0;
	while (s[i])
		i++;
	t = malloc(i + 1);
	if (t)
	{
		i = 0;
		while (s[i])
		{
			t[i] = s[i];
			i++;
		}
		t[i] = 0;
	}
	return (t);
}