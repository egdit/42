/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egur <egur@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 09:24:57 by egur              #+#    #+#             */
/*   Updated: 2022/10/15 17:16:54 by egur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		i;
	int		j;
	size_t	len;

	len = ft_strlen(dst);
	if (dstsize > 0 && dstsize > len)
	{
		i = len;
		j = 0;
		while (src[j] && i < (int)dstsize - 1)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
		return (len + ft_strlen(src));
	}
	return (dstsize + ft_strlen(src));
}
