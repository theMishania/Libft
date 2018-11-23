
#include "libft.h"

void 	ft_striter(char *s, void(*f)(char *))
{
	if (!f || !s)
		return ;
	while (*s)
		f(s++);
}
