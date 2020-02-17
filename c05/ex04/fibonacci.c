
int		fibonacci(int index)
{
	int num;

	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
	{
		num = fibonacci(index - 1) + fibonacci(index - 2);
		return (num);
	}
}
