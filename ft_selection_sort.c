/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_selection_sort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocummin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 17:40:21 by cocummin          #+#    #+#             */
/*   Updated: 2018/11/24 17:41:13 by cocummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_array_int_swap(int *nums, int i, int j)
{
	int tempo;

	tempo = nums[i];
	nums[i] = nums[j];
	nums[j] = tempo;
}

void	ft_selection_int_sort(int *nums, int len)
{
	int index;
	int j;

	index = 0;
	while (index < len - 1)
	{
		j = index + 1;
		while (j < len)
		{
			if (nums[index] > nums[j])
				ft_array_int_swap(nums, index, j);
			j++;
		}
		index++;
	}
}

void	ft_array_chr_swap(char *str, int i, int j)
{
	char tempo;

	tempo = str[i];
	str[i] = str[j];
	str[j] = tempo;
}

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
