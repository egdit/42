/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egur <egur@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:54:17 by egur              #+#    #+#             */
/*   Updated: 2022/10/08 11:54:21 by egur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	c;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < n)
	{
		c = 0;
		while ((haystack[i + c] == needle[c]) && (i + c) < n)
		{
			if (needle[c + 1] == '\0')
				return ((char *)(&haystack[i]));
			c++;
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
    //Test
	char *test = "http://www.egdit.epizy.com";
    char *test_c = "egdit";
	printf("%s\n",ft_strnstr(test,test_c,20));

    printf("=========================================================\n");

    //Orijinal
    char *orj = "http://www.usturlap.epizy.com";
    char *orj_c = "usturlap";
	printf("%s\n",strnstr(orj,orj_c,20));
}
*/