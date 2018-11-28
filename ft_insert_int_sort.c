/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_int_sort.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocummin <cocummin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 20:18:31 by cocummin          #+#    #+#             */
/*   Updated: 2018/11/28 20:18:51 by cocummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

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