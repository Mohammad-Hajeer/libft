#include "libft.h"

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);    
}
/*
int main()
{
    printf("%c\n", toupper(97));
    printf("%c\n", toupper(97));
}
*/