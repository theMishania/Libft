/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocummin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 17:28:43 by cocummin          #+#    #+#             */
/*   Updated: 2018/11/24 17:30:21 by cocummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_insert_int_sort(int *nums, int len)
{
	int index;
	int j;
	int tempo;

	index = 1;
	while (index < len)
	{
		j = index;
		while (j > 0 && nums[j - 1] > nums[j])
		{
			tempo = nums[j - 1];
			nums[j - 1] = nums[j];
			nums[j] = tempo;
			j--;
		}
		index++;
	}
}

void	ft_insert_chr_sort(char *str)
{
	char	tempo;
	int		index;
	int		j;

	index = 1;
	while (str[index])
	{
		j = index;
		while (j > 0 && str[j - 1] > str[j])
		{
			tempo = str[j];
			str[j] = str[j - 1];
			str[j - 1] = tempo;
			j--;
		}
		index++;
	}
}
