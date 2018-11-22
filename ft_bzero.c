
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char *tempo;

	tempo = (unsigned char *)s;
	while (n-- > 0)
		*(tempo++) = 0;
}
