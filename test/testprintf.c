#include "ft_printf/.h"

int main()
{
	char	*str;

	str = "allo la terre\n";
	printf("____Printf____\n");
	//ft_printf("ceci est le char %c", c);
	ft_printf("ceci est le nb |%d|", c);
	ft_printf("ceci est le str |%s|", str);
	ft_printf("ceci est le x |%x|", &str);
	printf("ceci est le x |%x|", &str);
	printf("___end___\n");
	return (0);
}
