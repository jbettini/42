#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

size_t ft_strlen(char *str);
int ft_puts(char *str);
int ft_checkvar(int c, va_list ap);
int ft_printf(char  *str, ...);
int ft_nblen(int nb);
void ft_putnb(int nb);
int ft_putc(char c);
int ft_puti(int nb);
#endif