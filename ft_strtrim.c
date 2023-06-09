#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	char	*temp;
	size_t	i;

	if (!s1 || !set)
		return (0);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	res = ft_strdup(&s1[i]);
	if (!res)
		return (res);
	i = ft_strlen(res) - 1;
	while (i < ft_strlen(res) && ft_strchr(set, res[i]))
		i--;
	temp = res;
	if (i < ft_strlen(res) && res[i])
	{
		res[i + 1] = 0;
		res = ft_strdup(res);
		if (!res)
			return (res);
		free(temp);
	}
	return (res);
}
