
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *result;
	int index;

	if (!(result = (char *)malloc(sizeof(*s) * ft_strlen(s) + 1)))
		return (NULL);
	index = 0;
	while (s[index])
	{
		result[index] = f(s[index]);
		index++;
	}
	result[index] = '\0';
	return (result);
}
