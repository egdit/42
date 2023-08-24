/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:35:05 by egur              #+#    #+#             */
/*   Updated: 2023/08/24 12:35:07 by egur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_five(t_list **stackA, t_list **stackB)
{
	int	flag;

	flag = 0;
	ft_push_small_a(stackA, stackB, flag, 0);
	flag = 1;
	ft_push_small_a(stackA, stackB, flag, 0);
	ft_sort_three(stackA);
	pa(stackA, stackB);
	pa(stackA, stackB);
}
