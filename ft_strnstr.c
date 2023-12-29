/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayeung <mayeung@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 20:57:55 by mayeung           #+#    #+#             */
/*   Updated: 2023/12/29 00:48:45 by mayeung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	if (little && !little[0])
		return ((char *)big);
	while (little && big && ft_strlen(little) <= len && *big)
	{
		if (!ft_strncmp(big, little, ft_strlen(little)))
			return ((char *)big);
		len--;
		big++;
	}
	return (NULL);
}
