
#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char *dst_tempo;
	const unsigned char *src_tempo;

	dst_tempo = (unsigned char *)dst;
	src_tempo = (unsigned char *)src;
	while (n-- > 0)
		*(dst_tempo++) = *(src_tempo++);
	return (dst);
}
