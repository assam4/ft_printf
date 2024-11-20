#include "libft.h"

void	*ft_memset(void *ptr, int simb, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)ptr;
	while (n--)
		*p++ = (unsigned char)simb;
	return (ptr);
}
