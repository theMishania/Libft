/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_selection_int_sort.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocummin <cocummin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 20:14:08 by cocummin          #+#    #+#             */
/*   Updated: 2018/12/04 16:58:06 by cocummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
