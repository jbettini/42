#include "ft_printf.h"

size_t	ft_putc(char c)
{
	return (write(1, &c, 1));
}

size_t	ft_puts(const char	*str)
{
	while (str)
		return (write (1, str, ft_strlen(str)));
	return (write(1, "(null)", 6));
}

size_t	ft_strlen(const char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_checkvar(va_list ap, int c)
{
	int	i;

	i = 0;
	if (c == '%')
		i += ft_putc('%');
	else if (c == 'c')
		i += ft_putc(va_arg(ap, int));
	else if (c == 's')
		i += ft_puts(va_arg(ap, char *));
	return (i);
}
