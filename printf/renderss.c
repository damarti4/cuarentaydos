void	render_chr(char *c)
{
	int	i;

	i = 0;
	while(c[i] != '\0')
	{
		write(1, &c, 1);
		i++;
	}
}
void	render_num(int n)
{
	render_chr(ft_putnbr(n));
}






void	putnbr_base_buf(unsigned long n, t_data *data)
{
	char	*digitos;

	digitos = "0123456789abcdef";
	if (data->format.mayusculas)
		digitos = "0123456789ABCDEF";
	if (n >= (unsigned long)data->format.base)
		putnbr_base_buf(n / data->format.base, data);
	write_buf(data, digitos[n % data->format.base]);
}