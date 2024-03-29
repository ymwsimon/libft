/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayeung <mayeung@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 20:53:44 by mayeung           #+#    #+#             */
/*   Updated: 2023/12/29 16:06:40 by mayeung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_int_length(int n)
{
	size_t	i;

	i = 1;
	if (n < 0)
		i++;
	while (n / 10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t	i;
	int		sign;
	char	*res;

	i = ft_int_length(n);
	res = malloc(sizeof(char) * (i + 1));
	if (!res)
		return (NULL);
	res[i] = 0;
	sign = 1;
	if (n < 0)
		sign = -1;
	res[0] = '0';
	if (n < 0)
		res[0] = '-';
	while (n)
	{
		res[i - 1] = (n % 10) * sign + '0';
		n /= 10;
		i--;
	}
	return (res);
}
