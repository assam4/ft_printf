#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	s_len;
	char	*ptr;

	s_len = ft_strlen(s) + 1;
	ptr = (char *)malloc((s_len) * sizeof(char));
	if (ptr)
		ft_strlcpy(ptr, s, s_len);
	return (ptr);
}
