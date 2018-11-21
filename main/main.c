/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocummin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 20:26:20 by cocummin          #+#    #+#             */
/*   Updated: 2018/11/21 21:43:52 by cocummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

int main(int argc, char **argv)
{
	printf("strlen %i\n", ft_strlen(argv[1]));
    printf("is alpha %i\n", ft_isalpha(argv[1][0]));
    printf("is digit %i\n", ft_isdigit(argv[1][0]));
	printf("is alnum %i\n", ft_isalnum(argv[1][0]));
    printf("is ascii %i\n", ft_isascii(argv[1][0]));
	printf("is print %i\n", ft_isprint(argv[1][0]));
	printf("is toUpper %c\n", ft_toupper(argv[1][0]));
	printf("is toLower %c\n", ft_tolower(argv[1][0]));
	printf("strcmp %i\n", ft_strcmp(argv[1], argv[0]));
	printf("strNcmp 3 elements %i\n", ft_strncmp(argv[1], argv[0], 3));
	printf("strcpy %s\n", ft_strcpy(argv[0], argv[1]));
	return (0);
}
