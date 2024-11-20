#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	letter;

	letter = (char)c;
	while (n--)
	{
		if (*(char *)s == letter)
			return ((void *)s);
		s = (char *)s + 1;
	}
	return (NULL);
}
