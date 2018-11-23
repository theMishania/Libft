
#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if ((int)n > ft_strlen(s1) || (int)n > ft_strlen(s2))
		return (ft_strequ(s1, s2));
	while (n-- && *s1 && *s2)
	{
		if (*s1 != *s2)
			return (0);
	}
	return (1);
}
