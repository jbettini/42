#include "ft_printf/.h"

int main()
{
	char	c;
	char	*str;

	str = "allo la terre\n";
	c = 'c';
	printf("____Printf____\n");
	//ft_printf("ceci est le char %c", c);
	ft_printf("ceci est le nb |%d|", c);
	ft_printf("ceci est le str |%s|", str);
	printf("___end___\n");
	return (0);
}
