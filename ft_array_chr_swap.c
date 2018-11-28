/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_chr_swap.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocummin <cocummin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 20:12:39 by cocummin          #+#    #+#             */
/*   Updated: 2018/11/28 20:13:14 by cocummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_array_chr_swap(char *str, int i, int j)
{
	char tempo;

    if (!str)
        return ;
	tempo = str[i];
	str[i] = str[j];
	str[j] = tempo;
}