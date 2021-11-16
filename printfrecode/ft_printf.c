#include "ft_printf.h"

int	ft_printf(const char	*str, ...)
{
	va_list	ap;
	int	i;
	int j;

	j = 0;
	i = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
			j += ft_checkvar(ap, str[++i]);
		else
			j += write (1, &str[i], 1);
		i++;
	}
	va_end(ap);
	return (j);
}
