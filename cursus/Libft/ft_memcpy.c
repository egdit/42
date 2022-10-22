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
	char	*source;
	char	*dest;

	source = (char *)src;
	dest = (char *)dst;
	if (!dst && !src)
		return (dst);
	while (n--)
		*dest++ = *source++;
	return (dst);
}

/* #include <stdio.h>
#include <string.h>
int main()
{
    //Test
    char test1[] = "Bilgisayar";
    const char test2[] = "ProgramlarProgramlar";

    printf("orj1 bellek içeriği: %s, orj2 bellek içeriği: %s\n", test1, test2);
    ft_memcpy(test1, test2, 10);
    printf("orj1 bellek içeriği: %s, orj2 bellek içeriği: %s\n", test1, test2);

    printf("=========================================================\n");
    //Orijinal
    char orj1[] = "Bilgisayar";
    const char orj2[] = "ProgramlarProgramlar";

    printf("orj1 bellek içeriği: %s, orj2 bellek içeriği: %s\n", orj1, orj2);
    memcpy(orj1, orj2, 10);
    printf("orj1 bellek içeriği: %s, orj2 bellek içeriği: %s\n", orj1, orj2);
}  */
