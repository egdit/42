/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_small.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:34:54 by egur              #+#    #+#             */
/*   Updated: 2023/08/24 12:34:56 by egur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_small_a(t_list **stackA, t_list **stackB, int flag, int i)
{
	t_list	*head;

	head = *stackA;
	while (head)
	{
		if (head->index == flag)
		{
			if (i <= 2 - flag)
			{
				while (i-- > 0)
					ra(stackA);
			}
			else
			{
				while ((5 - flag) > i)
				{
					rra(stackA);
					i++;
				}
			}
			pb(stackA, stackB);
		}
		i++;
		head = head->next;
	}
}
