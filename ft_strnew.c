
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *result;

	if (!(result = (char *)malloc(size)))
		return (NULL);
	ft_bzero(result, size);
	return (result);
}
