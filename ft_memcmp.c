
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *s1_tempo;
	unsigned char *s2_tempo;

	s1_tempo = (unsigned char *)s1;
	s2_tempo = (unsigned char *)s2;
	while (n && *s1_tempo && s1_tempo == s2_tempo)
	{
		s1_tempo++;
		s2_tempo++;
		n--;
	}
	return (n) ? (int)(*s1_tempo - *s2_tempo) : (0);
}
