int	render(const char *fmt, va_list apt)
{
	if (fmt == 'c' || fmt == 's')
		render_chr(va_arg(apt, char));
	else if (fmt == 'd' || fmt == 'i' || fmt == 'u' || fmt == 'x' || fmt == 'X')
		render_num(va_arg(apt, int));
	else if (fmt == '%')
		render_per(va_arg(apt, char));
	else if (fmt == 'p')
		render_pointer(va_arg(apt, int));
	else
		return (NULL);
	
}