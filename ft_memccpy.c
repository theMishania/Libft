
#include "libft.h"

void 	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *dst_tempo;
	unsigned char *src_tempo;

	dst_tempo = (unsigned char *)dst;
	src_tempo = (unsigned char *)src;
	while (n > 0)
	{
		if (*src_tempo == (unsigned char)c)
			return (++dst_tempo);
			dst_tempo++;
			src_tempo++;
	}
	return (NULL);
}
