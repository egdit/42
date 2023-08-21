/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args_diu.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 13:53:24 by egur              #+#    #+#             */
/*   Updated: 2023/06/18 13:53:32 by egur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* %d or %i: */
int	ft_putnbr_count(int n)
{
	int		len;
	char	*number;

	len = 0;
	number = ft_itoa(n);
	len = ft_putstr_count(number);
	free(number);
	return (len);
}

/* %u: */
int	ft_put_unsignedint_count(unsigned int n)
{
	int		len;
	char	*number;

	len = 0;
	if (n == 0)
		len += write(1, "0", 1);
	else
	{
		number = ft_uitoa(n);
		len += ft_putstr_count(number);
		free(number);
	}
	return (len);
}

int	ft_numlen(unsigned int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_uitoa(unsigned int n)
{
	int		len;
	char	*number;

	len = ft_numlen(n);
	number = malloc(sizeof(char) * (len + 1));
	if (!number)
		return (NULL);
	number[len] = '\0';
	while (n != 0)
	{
		number[len - 1] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	return (number);
}
