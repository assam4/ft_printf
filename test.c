#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
    int ret;
    int	*ptr;

    ret = ft_printf("Hello,%s world!\n", NULL);
    printf("Returned: %d\n", ret);
    ret = ft_printf("Number: %d\n", 42);
    printf("Returned: %d\n", ret);
    ret = ft_printf("Hexadecimal: %x\n", 255);
    printf("Returned: %d\n", ret);
    ptr = &ret;
    ret = ft_printf("Pointer: %p \n", NULL);
    printf("Returned: %d\n", ret);
    ret = ft_printf("Character: %c\n", 'A');
    printf("Returned: %d\n", ret);
    ret = ft_printf("Special chars: %s\n", "Hello\tWorld\n");
    printf("Returned: %d\n", ret);
    ret = ft_printf("No arguments!\n");
    printf("Returned: %d\n", ret);
    ret = ft_printf("Combined: %d %X %c\n", 42, 255, 'Z');
    printf("Returned: %d\n", ret);
    return (0);
}

