#ifndef 	FT_PRINTF.H
# define	FT_PRINTF.H

int	ft_numlen(unsigned int n);
int	ft_putchar(char c);

int	ft_printf(const char *str, va_list arg);
int	ft_print_ptr(const void *c);
int	ft_print_unsigned(unsigned int n);
int	ft_print_hex(unsigned int n, const char format);

#endif