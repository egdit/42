/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 14:10:59 by egur              #+#    #+#             */
/*   Updated: 2023/06/18 14:11:02 by egur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strrchr(const char *s, int c)
{
	char	*str;

	str = 0;
	if (c == '\0')
		return ((char *)s + ft_strlen(s));
	while (*s)
	{
		if (*s == c)
			str = ((char *)s);
		s++;
	}
	return (str);
}
