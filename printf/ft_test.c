#include "ft_printf.h"
//#include <stdio.h>

int main()
{
	int	c;
	unsigned long long	d;

	d = (int) "42";
	c = 'c';
	ft_printf("____Printf____\n", "");
	ft_printf("ceci est le char %c", c);
	ft_printf("ceci est le nb |%d|", d);
	ft_printf("___end___\n" "");
	return (0);
}
