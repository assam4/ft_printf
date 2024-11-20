#include "libft.h"

char	*ft_strnstr(const char *str, const char *key, size_t len)
{
	size_t	keylen;

	if (!(*key) || !key)
		return ((char *)str);
	keylen = ft_strlen(key);
	while (*str && len >= keylen)
	{
		if (*str == *key && !(ft_strncmp(str, key, keylen)))
			return ((char *)str);
		++str;
		--len;
	}
	return (NULL);
}
