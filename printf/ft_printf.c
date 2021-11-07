#include "ft_printf.h"
#include <stdarg.h>

/*str[i] */
int ft_printf(const char * str, ...)
{
	va_list	ap;
	int		i;
	int		j;

	i = 0;
	j = 0;
	va_start(ap, str); // initialise va_list va_arg -> renvoie a l'argument suivant |cspdiuxX|
	while (str[i])
	{
		if (str[i] == '%')
			j += ft_check_var(ap, str[++i]);
		else
			write(1, &str[i], 1);
		i++;
	}
	va_end(ap);
	return (j);
}

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
