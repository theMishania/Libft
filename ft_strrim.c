/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrim.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocummin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 16:15:48 by cocummin          #+#    #+#             */
/*   Updated: 2018/11/25 17:36:52 by cocummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#define WHITESPACED(a) a == ' ' || a == '\n' || a == '\t'

char    *ft_strrim(char const *s)
{
    int index;
    int j;
    char *result;
    int k;

    if (!s)
        return (NULL);
    index = 0;
    j = (int)ft_strlen(s) - 1;
    if (ft_strlen(s) == 0 ||
        (!(WHITESPACED(s[index]))) || (!(WHITESPACED(s[j]))))
        return ((char *)s);
    while (WHITESPACED(s[index]))
        index++;
    while (WHITESPACED(s[j]))
        j--;
    if (!(result = (char * )malloc(sizeof(char) * (j - index + 2))))
        return ((char *)s);
    k = 0;
    while (index <= j)
        result[k++] = s[index++];
    result[k] = '\0';
    return (result);
}