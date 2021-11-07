#include "ft_printf.h"

size_t	ft_putnb(unsigned long long nb)
{
	char	*base;

	base = "0123456789";
	if (nb >= ft_strlen(base))
	{
		ft_putnb(nb/ft_strlen(base));
	}
	return (write(1, &nb, 1));
}
