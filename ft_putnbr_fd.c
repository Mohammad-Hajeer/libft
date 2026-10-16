#include "libft.h"

int	countnum(int n)
{
	long long   i;
	long long	num;

	i = 1;
	num = n;
	while (num > 0)
	{
		i*=10;
		num /= 10;
	}
	return (i/10);
}

void    ft_putnbr_fd(int n, int fd)
{
    long long i;
    char c;

    if (n == -2147483648)
    {
        write (fd, "-2147483648", 11);
        return ;
    }
    else if (n == 0)
    {
        write (fd, "0", 1);
        return ;
    }
    if (n < 0)
    {
        write (fd, "-", 1);
        n = -n;
    }
    i = countnum(n);
    while (i > 0)
    {
        c =  (n / i) + '0';
        write (fd, &c, 1);
        n = n % i;
        i/=10;
    }
}
/*
int main(void)
{
    //printf("%d\n",countnum(1234));
    ft_putnbr_fd(1234,1);
}*/