#include "libft.h"

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + 32);
    return (c);    
}
/*
int main()
{
    printf("%c\n",tolower(65));
    printf("%c\n",ft_tolower(65));
}
*/