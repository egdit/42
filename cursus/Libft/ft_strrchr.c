/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egur <egur@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:59:15 by egur              #+#    #+#             */
/*   Updated: 2022/10/08 10:59:19 by egur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*string;

	string = str;
	while (*str)
		str++;
	if (c == 0)
		return ((char *)str);
	while (str >= string)
	{
		if (*str == c)
			return ((char *)str);
		str--;
	}
	return (0);
}

/* #include <stdio.h>
#include <string.h>
int main()
{
    //Test
	char *test = "ensar";
	printf("%s\n",ft_strrchr(test,114));

    printf("=========================================================\n");

    //Orijinal
    char *orj = "ensar";
	printf("%s\n",strrchr(orj,114));
}  */