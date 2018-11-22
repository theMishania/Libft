
#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t dst_len;
	size_t src_len;
	size_t index;
	//size_t j;
	char *tempo;

	src_len = ft_strlen(src);
	index = 0;
	dst_len = ft_strlen(dst);
	if (dstsize < dst_len + 1)
		return (dstsize + src_len);
	else
	{
		tempo = dst;
		while (*dst)
			dst++;
		dstsize -= dst_len;
		while (dstsize > 1 && *src)
		{
			*dst = *src;
			dst++;
			src++;
			dstsize--;
		}
		dst = tempo;
		return (dst_len + src_len);
	}
}
