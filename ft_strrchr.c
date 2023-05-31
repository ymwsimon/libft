char	*ft_strrchr(const char *s, int c)
{
	char	*h;

	h = (char *)s;
	if (h)
	{
		while (*h)
			h++;
		if (!c)
			return (h);
		while (h >= s)
		{
			if (*h == (char)c)
				return (h);
			h--;
		}
	}
	return (0);
}
