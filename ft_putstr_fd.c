#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    int i;

    if (s == NULL)
        return ;
    i = 0;
    while (s[i] != '\0')
    {
        write (fd, &s[i], 1);
        i++;
    }
}
/*
int main(void)
{
    char str[] ="Hello World";
    ft_putstr_fd(str,1);
}*/