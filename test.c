#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>

int main(void)
{
    int ret;
    int	*ptr;
/*
    ret = ft_printf("Hello,%s world!\n", NULL);
    printf("Returned: %d\n", ret);
    ret = ft_printf("Number: %d\n", 42);
    printf("Returned: %d\n", ret);
    ret = ft_printf("Hexadecimal: %x\n", 255);
    printf("Returned: %d\n", ret);
    ptr = NULL;
    printf("NOW\n");

    ret = ft_printf(" %p %p ", 0, 0);
    printf("Returned: %d\n", ret);

    ret = ft_printf("Character: %c\n", 'A');
    printf("Returned: %d\n", ret);
    ret = ft_printf("Special chars: %s\n", "Hello\tWorld\n");
    printf("Returned: %d\n", ret);
    ret = ft_printf("No arguments!\n");
    printf("Returned: %d\n", ret);
    ret = ft_printf("Combined: %d %X %c\n", 42, LONG_MAX, 'Z');

    printf("Returned: %d\n", ret);
    */
    int x = ft_printf(" %p %p ", LONG_MIN, LONG_MAX);
    ft_printf("\n%i", x);
    return (0);
}

