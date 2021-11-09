#include "ft_printf.h"

size_t	ft_putnb(unsigned long nb, char	*base)
{
	unsigned long n;

	n = 0;
	base = "0123456789";
	if (nb >= ft_strlen(base), base)
		ft_putnb(nb/ft_strlen(base), base);
	return (write(1, &nb, 1));
}
