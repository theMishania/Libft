/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocummin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 22:15:50 by cocummin          #+#    #+#             */
/*   Updated: 2018/11/24 22:40:40 by cocummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_size(long nbr)
{
	int size;

	size = 1;
	while (nbr >= 10)
	{
		nbr /= 10;
		size += 1;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char *result;
	long nbr;
	int size;
	int index;

	nbr = (long)n;
	if (nbr < 0)
		nbr = -nbr;
	size = get_size(nbr);
	if (!(result = malloc(size + (n < 0 ? 1 : 0) + 1)))
		return (NULL);
	index = 0;
	if (n < 0)
		result[index] = '-';
	result[(n < 0) ? size + 1 : size] = '\0';
	index = (n < 0) ? size : size - 1;
	while (nbr >= 10)
	{
		result[index] = (char)(nbr % 10 + 48);
		nbr /= 10;
		index--;
	}
	result[index] = (nbr % 10 + 48);
	return (result);
}
