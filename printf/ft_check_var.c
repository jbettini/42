#include "ft_printf.h"

size_t ft_check_var(va_list ap , int n)
{
	size_t	i;
	// udics%pxX
	i = 0;
	{
		if (n == 'u' || n == 'd' || n == 'i')
			i += ft_putnb(va_arg(ap, unsigned int));
			else if (n == 'c')
				i += ft_putchar(va_arg(ap, char));
			else if (n == 's')
				i += ft_putstr(va_arg(ap, char *);
			else if (n == '%')
				i += ft_putchar("%");
			else if (n == 'p')
				i += ft_putptr(ap, unsigned int);
			else if (n == 'x' || n == 'X')
				i += ft_puthex(ap);*/
	}
	return (i);
}
