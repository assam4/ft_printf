#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	ptr_len;

	if (!s || start >= ft_strlen(s))
		return (ft_strdup(""));
	ptr_len = ft_strlen(s) - start;
	if (len < ptr_len)
		ptr_len = len;
	ptr = (char *)malloc((ptr_len + 1) * sizeof(char));
	if (ptr)
		ft_strlcpy(ptr, s + start, ptr_len + 1);
	return (ptr);
}
