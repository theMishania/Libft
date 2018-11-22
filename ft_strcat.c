
#include "libft.h"

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	char *tempo;

	tempo = s1;
	while (*s1)
		s1++;
	while (*s2)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
	return (tempo);
}
