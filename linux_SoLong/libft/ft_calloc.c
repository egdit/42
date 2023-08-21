/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 13:55:16 by egur              #+#    #+#             */
/*   Updated: 2023/06/18 13:55:19 by egur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char			*new;
	size_t			i;
	unsigned int	total;

	i = 0;
	total = nmemb * size;
	new = malloc(total);
	if (!new)
		return (NULL);
	while (total > 0)
	{
		new[i] = 0;
		total--;
		i++;
	}
	return ((void *)new);
}
