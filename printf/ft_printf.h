#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

size_t	ft_strlen(const char	*str);
size_t	ft_putchar(char	c);
size_t	ft_putstr(const char	*str);
size_t	ft_check_var(va_list ap, int c);
size_t	ft_putnb(unsigned long long nb);
int ft_printf(const char * str, ...);

#endif
