/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egur <egur@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:13:50 by egur              #+#    #+#             */
/*   Updated: 2022/10/08 11:13:51 by egur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (str1[i] && str2[i] && str1[i] == str2[i] && i < n - 1)
		i++;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
    //Test
	char *test1 = "abc";
    char *test2 = "def";
	printf("%d\n",ft_strncmp(test1,test2,1));

    printf("=========================================================\n");

    //Orijinal
    char *orj1 = "abc";
    char *orj2 = "def";
	printf("%d\n",strncmp(orj1,orj2,1));
}
*/