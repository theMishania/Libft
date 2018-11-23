
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *result;
	int index;

	if (!(result = (char *)malloc(sizeof(*s) * len + 1)))
		return (NULL);
	index = 0;
	while(len--)
	{
		result[index] = s[start + index];
		index++;
	}
	result[index] = '\0';
	return (result);
}
