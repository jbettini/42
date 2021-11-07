#include "ft_printf.h"

size_t	ft_putstr(const char	*str)
{
	int i;

	i = -1;
	while(str[i])
	{
		i++;
	}
	return (write(1, &str[i], 1));
}
