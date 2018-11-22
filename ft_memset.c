
#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	unsigned char *tempo;

	tempo = (unsigned char *)b;
	while (len > 0)
	{
		*tempo = (unsigned char)c;
		len--;
		tempo++;
	}
	return (b);
}
