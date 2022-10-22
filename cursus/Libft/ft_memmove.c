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
	if (tmp < src)
	{
		while (n--)
			dest[n] = tmp[n];
	}
	else
		ft_memcpy(dest, tmp, n);
	return (dst);
}
/* 
#include <stdio.h>
#include <string.h>
int main()
{
    //Test
    char test1[] = "Bilgisayar";
    const char test2[] = "ProgramlarProgramlar";

    printf("orj1 bellek içeriği: %s, orj2 bellek içeriği: %s\n", test1, test2);
    ft_memmove(test1, test2, 10);
    printf("orj1 bellek içeriği: %s, orj2 bellek içeriği: %s\n", test1, test2);

    printf("=========================================================\n");
    //Orijinal
    char orj1[] = "Bilgisayar";
    const char orj2[] = "ProgramlarProgramlar";

    printf("orj1 bellek içeriği: %s, orj2 bellek içeriği: %s\n", orj1, orj2);
    memmove(orj1, orj2, 10);
    printf("orj1 bellek içeriği: %s, orj2 bellek içeriği: %s\n", orj1, orj2);
}
 */
