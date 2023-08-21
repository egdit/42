/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isstringdigit.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 13:56:43 by egur              #+#    #+#             */
/*   Updated: 2023/06/18 13:56:44 by egur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isstringdigit(char *string)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (string[i])
	{
		if (ft_isdigit(string[i]) == 1)
			result = 1;
		else
			return (0);
		i++;
	}
	return (result);
}
