#include "ft_printf.h"

void	ft_putbase(unsigned long long nb, char	*base, void *pt)
{
	if (pt != NULL && nb == 0)
		nb = (unsigned long long)pt;
	if (nb >= ft_strlen(base))
		ft_putbase(nb / ft_strlen(base), base, pt);
	write(1, &base[nb % ft_strlen(base)], 1);
}

size_t	putsize(unsigned long long nb, char *base, void *pt)
{
	size_t	i;

	i = 0;
	ft_putbase(nb, base, pt);
	while (nb != 0)
	{
		nb /= ft_strlen(base);
		i++;
	}
	return (i);
}

int main()
{
	int i = 1;

	printf("ADR = %p\n", &i);
	printf("LD = %ld\n", &i);
	printf("X = %x\n", &i);
}
