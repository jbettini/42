#include "ft_printf.h"
//#include <stdio.h>

int main()
{
	int	c;

	c = 'c';
	ft_printf("____Printf____\n", "");
	ft_printf("ceci est le char %c", c);
	ft_printf("___end___\n" "");
	return (0);
}
