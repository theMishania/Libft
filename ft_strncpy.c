
#include "libft.h"

char  *ft_strncpy(char *dst, const char *src, size_t len)
{
	char *tempo;

	tempo = dst;
	while (len && *src)
	{
		*dst = *src;
		src++;
		dst++;
		len--;
	}
	*dst = '\0';
	return (tempo);
}
