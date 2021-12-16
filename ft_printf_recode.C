#include "ft_printf.h"

int ft_putc(char c)
{
    return (write(1, &c, 1));
}

size_t ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}

int ft_puts(char *str)
{
    while (str)
        return (write(1, str, ft_strlen(str)));
    return (1, "(null)", 6);
}

int ft_checkvar(int c, va_list ap)
{
    int i;

    i = 0;
    if (c == 'd')
        i += (ft_puti(va_arg(ap, int)));
    else if (c == 's')
        i += ft_puts(va_arg(ap, char*));
    return (i);
}

int ft_printf(char  *str, ...)
{
    va_list ap;
    int     i;
    int      j;

    va_start(ap, str);
    i = 0;
    j = 0;
    while (str[i])
    {
        if (str[i] == '%')
            j += ft_checkvar(str[++i], ap);
        else
            j += write(1, &str[i], 1);
        i++;
    }
    va_end(ap);
    return (j);
}
/*
int main ()
{
    ft_printf("%c", 'a');
    write(1, "\n", 1);
    ft_printf("%c", 'A');
    write(1, "\n", 1);
    ft_printf("%s", "allo");
    write(1, "\n", 1);
    ft_printf("%d", 1);
    return (0);
}*/