#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int j;
    int c;
    char *ptr;

    i = 0;
    c = 0;
    while (s1[i] !='\0')
        i++;
    while (s2[c] != '\0')
        {
            i++;
            c++;
        }
    ptr = malloc(i+1);
    if(ptr == NULL)
        return (NULL);
    c = 0;
    while(s1[c] != '\0')
    {
        ptr[c] = s1[c];
        c++;
    }
    j = 0;
    while(s2[j] != '\0')
    {
        ptr[c] = s2[j];
        c++;
        j++;
    }
    ptr[c] = '\0';
    return (ptr);
}
/*
int main (void)
{
    printf("%s\n",ft_strjoin("Mohammad"," Hajeer"));
}*/