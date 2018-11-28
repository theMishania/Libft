/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_chr_sort.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocummin <cocummin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 20:19:23 by cocummin          #+#    #+#             */
/*   Updated: 2018/11/28 20:19:31 by cocummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

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