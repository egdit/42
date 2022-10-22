/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egur <egur@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:29:34 by egur              #+#    #+#             */
/*   Updated: 2022/10/15 17:09:17 by egur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == c)
			return ((void *)str + i);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
    //Test
	char *test = "http://www.egdit.epizy.com";
    char test_c = 'w';
	printf("%s\n",ft_memchr(test,test_c,11));

    printf("=========================================================\n");

    //Orijinal
    char *orj = "http://www.usturlap.epizy.com";
    char orj_c = 'w';
	printf("%s\n",memchr(orj,orj_c,11));
}
*/
