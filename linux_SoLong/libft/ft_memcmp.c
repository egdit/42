/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 14:02:18 by egur              #+#    #+#             */
/*   Updated: 2023/06/18 14:02:21 by egur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*str_s1;
	char	*str_s2;

	i = 0;
	str_s1 = (char *)s1;
	str_s2 = (char *)s2;
	if (n == 0)
		return (0);
	while ((i < n - 1) && (str_s1[i] == str_s2[i]))
		i++;
	return ((unsigned char)str_s1[i] - (unsigned char)str_s2[i]);
}
