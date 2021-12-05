int	ft_str_is_numeric(char *str)
{
	int	i; // index of pointer address

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
	}
	return (1);
}
