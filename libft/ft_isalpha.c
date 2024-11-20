#include "libft.h"

int	ft_isalpha(int str)
{
	return ((str >= 'A' && str <= 'Z')
		|| (str >= 'a' && str <= 'z'));
}
