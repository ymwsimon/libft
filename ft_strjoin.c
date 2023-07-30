/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayeung <mayeung@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 20:56:17 by mayeung           #+#    #+#             */
/*   Updated: 2023/07/30 20:56:17 by mayeung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;

	res = 0;
	if (s1 && s2)
	{
		res = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
		if (res)
		{
			res[0] = 0;
			ft_strlcat(res, s1, ft_strlen(s1) + 1);
			ft_strlcat(res, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
		}
	}
	return (res);
}
