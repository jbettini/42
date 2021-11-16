#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>

int			ft_printf(const char	*str, ...);
size_t		ft_putc(char c);
int			ft_checkvar(va_list ap, int c);
size_t		ft_strlen(const char	*str);
size_t		ft_puts(const char	*str);

#endif
