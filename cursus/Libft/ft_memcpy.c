/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egur <egur@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:50:41 by egur              #+#    #+#             */
/*   Updated: 2022/10/22 17:32:04 by egur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(char*)(dst + i) = *(char*)(src + i);
		i++;
	}
	return (dst);
}

/* #include <stdio.h>
int main()
{
    //Test
    char test1[] = "Ensar";
    const char test2[] = "Gur";

    printf("test1 : %s\ttest2 : %s\n", test1, test2);
    ft_memcpy(test1, test2, 10);
    printf("test1 : %s\ttest2 : %s\n", test1, test2);
} */
