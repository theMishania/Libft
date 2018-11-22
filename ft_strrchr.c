
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int index;

	index = ft_strlen(s);
	s += index;
	while (index > 0 )
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
		index--;
	}
	return (NULL);
}
