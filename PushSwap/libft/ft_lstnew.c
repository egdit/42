/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:33:18 by egur              #+#    #+#             */
/*   Updated: 2023/08/24 12:33:20 by egur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(int content)
{
	t_list	*root;

	root = (t_list *)malloc(sizeof(*root));
	if (root == NULL)
		return (0);
	root -> content = content;
	root -> index = -1;
	root -> next = NULL;
	return (root);
}
