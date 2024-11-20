#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	s_len;
	char	letter;

	letter = (char)c;
	s_len = ft_strlen(s) + 1;
	while (s_len--)
	{
		if (*s == letter)
			return ((char *)s);
		++s;
	}
	return (NULL);
}
