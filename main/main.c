/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocummin <cocummin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 20:26:20 by cocummin          #+#    #+#             */
/*   Updated: 2018/11/24 18:28:38 by cocummin         ###   ########.fr       */
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

	printf("ft_strcmp %i the original strcmp %i\n", ft_strcmp(argv[1], argv[0]), strcmp(argv[1], argv[0]));
	printf("strNcmp 3 elements %i original strcmp %i\n", ft_strncmp(argv[1], argv[0], 3), strncmp(argv[1], argv[0], 3));

	printf("strcpy %s\n", ft_strcpy(argv[0], argv[1]));
	printf("strNcpy %s the original strNcpy %s\n", ft_strncpy(argv[0], argv[1], 3), strncpy(argv[0], argv[1], 3));

	printf("ARGVs is %s, %s\n", argv[0], argv[1]);
	printf("strcat is %s\n", ft_strcat(argv[0], argv[1]));

	char test1[4] = "you\0";
	char test2[5] = "maan\0";
	printf("Tests is %s, %s\n", test1, test2);
	printf("strNcat 2 elements is %s\n", ft_strncat(test1, test2, 1));

	char test3[11] = "your\0\0\0\0\0\0\0";
	char test4[5] = "maan\0";

	printf("strLcat 5 elements is %lu, original is %lu\n", ft_strlcat(test3, test4, 7), strlcat(test3, test4, 3));
	printf("%s\n", test3);

	printf("strchr is %s\n", ft_strchr(test3, 0));
	char test5[5] = "Wowo\n";
	printf("strRchr is %s\n", ft_strrchr(test5, 111));

	char heystack[5] = "Mike\0";
	char needle[2] = "t\0";
	printf("strstr is %s\n", ft_strstr(heystack, needle));
	char heystack1[11] = "MikeMayers\0";
	char needle1[3] = "Ma\0";
	printf("strNstr is %s\n", ft_strnstr(heystack1, needle1, 5));

	char test6[6] = "\0\0\0\0\0\0";
	printf("memset is %s\n", ft_memset(test6, 100, 2));
	ft_bzero(test6, 2);
	printf("bzero is %s\n", test6);

	char test7[10] = "123456789\0";
	char test8[10] = "987654321\0";
	printf("memcpy is %s\n", ft_memcpy(test7, test8, 5));
	printf("%s\n", test7);
	printf("%s\n", test8);
	printf("memCcpy is %s\n", ft_memccpy(test7, test8, 49, 9));
	printf("%s\n", test7);
	printf("memchr is %s\n", ft_memchr(test7, 53, 9));

	char test9[4] = "asd\0";
	char test10[4] = "asd\0";
	printf("memcmp is %i\n", ft_memcmp(test9, test10, 4));
	return (0);
}
