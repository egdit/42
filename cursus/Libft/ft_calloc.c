/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egur <egur@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:46:53 by egur              #+#    #+#             */
/*   Updated: 2022/10/08 12:46:57 by egur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, (count * size));
	return (ptr);
}

/* #include <stdio.h>
#include <stdlib.h>

int main ()
{
    //Test
   int i, n;
   int *a;

   printf("Girilecek eleman sayısı : ");
   scanf("%d",&n);

   a = (int*)ft_calloc(n, sizeof(int));
   printf("%d tane sayı gir :\n",n);
   for( i=0 ; i < n ; i++ ) {
      scanf("%d",&a[i]);
   }

   printf("Girilen sayılar : ");
   for( i=0 ; i < n ; i++ ) {
      printf("%d ",a[i]);
   }
   free(a);
} */
