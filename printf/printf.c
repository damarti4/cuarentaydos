#include <stdarg.h>

int ft_printf(char const *fmt, ...)
{
	int		count;
	int		i;
	va_list apt;

	i = 0;
	if (!fmt)
		return (NULL);
	va_start (apt, fmt);
	while (fmt[i] != NULL)	
	{
		if ((ft_strchr(&fmt[i], '%')) && fmt[i + 1])
			{
				render(&fmt[i], apt);
				if ((render(&fmt[i], apt)) == NULL)
					return (NULL);
				i++;
			}
		else if ((ft_strchr(&fmt[i], '%') == NULL))
			{
				write (1, &fmt[i], 1);
				count++;
				i++;
			}
	}
	va_end (apt);
	return (count);
}