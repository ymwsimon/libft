#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	r;
	int		t;
	int		sign;
	int		ten;

	t = n;
	ten = 1;
	sign = 1;
	if (n < 0)
	{
		write(fd, "-", 1);
		sign = -1;
	}
	while (t > 9 || t < -9)
	{
		ten *= 10;
		t /= 10;
	}
	while (ten)
	{
		r = n / ten * sign + '0';
		write(fd, &r, 1);
		n %= ten;
		ten /= 10;
	}
}
