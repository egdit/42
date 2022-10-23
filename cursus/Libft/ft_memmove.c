/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egur <egur@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:33:39 by egur              #+#    #+#             */
/*   Updated: 2022/10/15 17:12:09 by egur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*tmp;
	char	*dest;

	tmp = (char *)src;
	dest = (char *)dst;
	if (tmp < dest)
	{
		while (n--)
			dest[n] = tmp[n];
	}
	else
		ft_memcpy(dest, tmp, n);
	return (dst);
}

/* #include <stdio.h>
int main()
{
    //Test
    char test1[] = "Ensar";
    const char test2[] = "Gur";

    printf("test1 : %s\ttest2 : %s\n", test1, test2);
    ft_memmove(test1, test2, 10);
    printf("test1 : %s\ttest2 : %s\n", test1, test2);
} */