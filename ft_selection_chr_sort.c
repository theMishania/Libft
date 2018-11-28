/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_selection_chr_sort.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocummin <cocummin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 20:15:41 by cocummin          #+#    #+#             */
/*   Updated: 2018/11/28 20:15:50 by cocummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_selection_chr_sort(char *str)
{
	int index;
	int j;
	int len;

	len = ft_strlen(str);
	index = 0;
	while (index < len - 1)
	{
		j = index + 1;
		while (j < len)
		{
			if (str[index] > str[j])
				ft_array_chr_swap(str, index, j);
			j++;
		}
		index++;
	}
}