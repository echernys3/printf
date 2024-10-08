#include "libft.h"
#include "ft_printf.h"

static int	hexlen(unsigned int n)
{
	int	len;

	len = 0;
	while (n)
	{
		len++;
		n /= 16;
	}
	return (len);
}

static void	puthex(unsigned int n, const char format)
{
	if (n >= 16)
	{
		puthex(n / 16, format);
		puthex(n % 16, format);
	}
	else
		if (n <= 9)
			ft_putchar(n + '0');
		else
		{
			if (format == 'x')
				ft_putchar(n - 10 + 'a');
			if (format == 'X')
				ft_putchar(n - 10 + 'A');
		}
}

int	ft_print_hex(unsigned int n, const char format)
{
	if (n == 0)
		return (ft_putchar('0'));
	else
		puthex(n, format);
	return (hexlen(n));
}