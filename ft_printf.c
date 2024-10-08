#include "libft.h"

static int	printarg(const char *str, va_list arg, int i, int print_len)
{
		if (*(str + i + 1) == '%')
			ft_putchar('%');
		else if (*(str + i + 1) == 's')
		{
			ft_putstr(arg[argcount]);
			print_len += ft_strlen(arg[argcount]);
		}
		else if (*(str + i + 1) == 'd' || *(str + i + 1) == 'i')
		{
			ft_putnbr(arg[argcount]);
			print_len += ft_numlen(arg[argcount]);
		}
		else if ()
		return (print_len);

}

int	ft_printf(const char *str, va_list arg)
{
	va_start(arg, str);
	int	argcount;
	int	i;
	int	char_count;
	int	print_len;

	print_len = 0;
	argcount = 0;
	while (str[i])
	{.
		if (*(str + i) == %)
		{
			print_len  += printarg(str, arg, i, print_len);
			i++;
			argcount++;
		}
		else
		{
			ft_putchar(*(str + i));
			char_count++;
		}
		i++;
	}

	va_end(arg);
	if ()
		return (-1);
	return (char_count + print_len);
}


