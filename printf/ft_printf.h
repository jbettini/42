#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

size_t	ft_strlen(const char	*str);
size_t	ft_putchar(char	c);
void	ft_putstr(const char	*str);
//size_t	ft_check_var(va_list ap, int c);
void	putbase(unsigned long long nb, char *base);

#endif
