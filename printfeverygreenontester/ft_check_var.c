#include "ft_printf.h"

int ft_check_var(va_list ap , int n)
{
	int	i;
	// udics%pxX
	i = 0;
	{
		if (n == 'c')
			i += ft_putc(va_arg(ap, int));
		else if (n == 's')
			i += ft_puts(va_arg(ap, char *));
		else if (n == '%')
			i += ft_putc('%');
		else if (n == 'd' || n == 'i')
			i += ft_puti(va_arg(ap, int));
		else if (n == 'p')
		{
			write(1, "0x", 2);
			i += ft_putsize(0, "0123456789abcdef", (void *)va_arg(ap, const char *));
			return (i + 2);
		}
		else if (n == 'u')
			i += ft_putsize((unsigned long long)va_arg(ap, unsigned int), "0123456789", NULL);
		else if (n == 'x')
			i += ft_putsize((unsigned long long)va_arg(ap, unsigned int), "0123456789abcdef", NULL);
		else if (n == 'X')
			i += ft_putsize((unsigned long long)va_arg(ap, unsigned int), "0123456789ABCDEF", NULL);
	}
	return (i);
}
