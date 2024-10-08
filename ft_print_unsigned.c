#include "ft_printf.h"
#include "libft.h"

static char	*miniitoa(unsigned int n)
{
	char	*str;
	int	n_len;

	n_len = numlen(n);
	str = malloc(sizeof(char) * (n_len + 1));
	if (!str)
		return (0);
	str[n_len--] = '\0';
	while (n_len >= 0 && n)
	{
		str[n_len] = n % 10 + '0';
		n /= 10;
		n_len--;
	}
	return (str);
}

int	ft_print_unsigned(unsigned int n)
{
	int		print_len;
	char	*str;

	print_len = 0;
	if (n == 0)
		print_len += ft_putchar('0');
	else 
	{
		str = miniitoa(n);
		while(str[print_len])
			putchar(str[print_len++]);
		print_len--;
		free(str);
	}
	return (print_len);
}