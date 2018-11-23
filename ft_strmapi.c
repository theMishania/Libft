
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *result;
	unsigned int index;

	if (!(result = (char *)malloc(sizeof(*s) * ft_strlen(s) + 1)))
		return (NULL);
	index = 0;
	while (s[index])
	{
		result[index] = f(index, s[index]);
		index++;
	}
	result[index] = '\0';
	return (result);
}
