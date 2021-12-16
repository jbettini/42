#include "ft_printf.h"

int ft_nblen(int nb)
{
    int neg, res = 0;

    if (nb <= 0)
    {
        neg = 1;
        nb *= -1;
    }
    if (nb > 0)
    {
        nb /= 10;
        res++;
    }
    return (res + neg);
}

void ft_putnb(int nb)
{
    int res, neg = 0;

    if (nb == -2147483648)
        ft_puts("-2147483648");
    if (nb < 0)
    {
        write(1, "-", 1);
        nb *= -1;
    }
    else if (nb > -1 && nb < 10)
        ft_putc(nb + 48);
    else
        ft_putnb(nb / 10);
    ft_putnb(nb % 10 + 48);
}

int ft_puti(int nb)
{
    int i;
    void j;

    i = ft_nblen(nb);
    j = ft_putnb(i);
    return (j);
}