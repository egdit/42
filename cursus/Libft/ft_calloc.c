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

int main () {
    //Test
   int i, n;
   int *a;

   printf("Number of elements to be entered:");
   scanf("%d",&n);

   a = (int*)ft_calloc(n, sizeof(int));
   printf("Enter %d numbers:\n",n);
   for( i=0 ; i < n ; i++ ) {
      scanf("%d",&a[i]);
   }

   printf("The numbers entered are: ");
   for( i=0 ; i < n ; i++ ) {
      printf("%d ",a[i]);
   }
   free(a);
   printf("\n==================================\n");
   
   //Orijinal
   int z, x;
   int *y;

   printf("Number of elements to be entered:");
   scanf("%d",&x);

   y = (int*)ft_calloc(n, sizeof(int));
   printf("Enter %d numbers:\n",x);
   for( z=0 ; z < x ; z++ ) {
      scanf("%d",&y[z]);
   }

   printf("The numbers entered are: ");
   for( z=0 ; z < x ; z++ ) {
      printf("%d ",y[z]);
   }
   free(y);
} */