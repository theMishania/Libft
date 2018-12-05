/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocummin <cocummin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 16:40:22 by cocummin          #+#    #+#             */
/*   Updated: 2018/12/05 19:20:09 by cocummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_wrds_cnt(char const *s, char c)
{
	int index;
	int result;

	index = 0;
	result = 0;
	while (s[index])
	{
		while (s[index] == c)
			index++;
		if (s[index])
			result++;
		while (s[index] && (s[index] != c))
			index++;
	}
	return (result);
}

static void	ft_clear(char **array, int n)
{
	int index;

	index = 0;
	while (index < n)
		free(array[index++]);
	free(array);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**result;
	int		index;
	int		j;
	int		z;

	index = 0;
	j = 0;
	z = 0;
	if (!s || !c)
		return (NULL);
	if (!(result = (char **)malloc(sizeof(char *) * (get_wrds_cnt(s, c) + 1))))
		return (NULL);
	while (s[index])
	{
		while (s[index] == c)
			index++;
		j = index;
		while (s[index] && s[index] != c)
			index++;
		if (index > j)
			if (!(result[z++] = ft_strndup(s + j, index - j)))
				ft_clear(result, z);
	}
	result[z] = 0;
	return (result);
}
