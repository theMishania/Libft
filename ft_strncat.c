
#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	char *tempo;

	tempo = s1;
	while (*s1)
		s1++;
	while (n && *s2)
	{
		*s1 = *s2;
		s1++;
		s2++;
		n--;
	}
	*s1 = '\0';
	return (tempo);
}
