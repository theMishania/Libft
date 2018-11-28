/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_int_swap.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocummin <cocummin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 20:10:43 by cocummin          #+#    #+#             */
/*   Updated: 2018/11/28 21:43:13 by cocummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_array_int_swap(int *nums, int i, int j)
{
	int tempo;

	if (!nums || nums[i] || nums[j])
		return ;
	tempo = nums[i];
	nums[i] = nums[j];
	nums[j] = tempo;
}
