/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egur <egur@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:43:24 by egur              #+#    #+#             */
/*   Updated: 2022/10/15 17:13:43 by egur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = c;
		i++;
	}
	return (s);
}

/* #include <stdio.h>
int main()
{
    char str[50] = "Ensar 54545454 Gür";
    printf("str önce  : %s\n", str);

    ft_memset(str + 5, ' ', 10*sizeof(char));
  
    printf("str sonra : %s\n", str);
    return 0;
} */