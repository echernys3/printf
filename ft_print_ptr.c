#include "ft_printf.h"
#include "libft.h"

int	ft_print_ptr(const void *c)
{
	unsigned int	*ptr;
	int				print_len;

	ptr = &c;
	print_len += ft_print_hex(ptr, x);
	return (print_len);
}