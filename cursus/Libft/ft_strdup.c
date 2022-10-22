/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egur <egur@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:34:42 by egur              #+#    #+#             */
/*   Updated: 2022/10/08 13:34:44 by egur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		size;
	char	*ptr;

	size = ft_strlen((char *)s1);
	ptr = malloc((size + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, s1, size);
	ptr[size] = '\0';
	return (ptr);
}

/* #include<stdio.h>
#include<string.h>
 
int main()
{
    //Test
    char test_str[] = "Hello World";
    char* test = ft_strdup(test_str);
 
    printf("%s\n=================================\n", test);

    //Orijinal
    char orj_str[] = "Hello World";
    char* orj = strdup(orj_str);
 
    printf("%s\n", orj);
} */