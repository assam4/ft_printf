#include "libft.h"

int	ft_isalnum(int letter)
{
	return (ft_isalpha(letter) || ft_isdigit(letter));
}
