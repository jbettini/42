#include "ft_printf.h"

void	putbase(unsigned long long nb, char *base)
{
	if (nb >= ft_strlen(base))
		putbase(nb/ft_strlen(base), base);
	ft_putchar(base[nb % ft_strlen(base)]);
}
