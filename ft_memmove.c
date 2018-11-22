
#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *dst_tempo;
	const unsigned char *src_tempo;

	if (dst < src)
		ft_memcpy(dst, src, len);
	else if (dst > src)
	{
			dst_tempo = (unsigned char *)dst;
			src_tempo = (const unsigned char *)src;
			while (len--)
				dst_tempo[len] = src_tempo[len];
	}
	return (dst);
}
