#include "ft_printf.h"

size_t	ft_putc(char c)
{
	return (write(1, &c, 1));
}

size_t	ft_puts(const char	*str)
{
	int i;

	i = 0;
	while (str)
		return (write(1, str, ft_strlen(str)));
	return (write(1, "(null)", 6));
}


