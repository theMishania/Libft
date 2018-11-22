
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
		{
			return (char*)s;
		}
		s++;
	}
	return (c == 0 ? (char*)s : NULL);
}
