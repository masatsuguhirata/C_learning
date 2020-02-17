
int		iterative_factorial(int nb)
{
	int num;

	num = 1;
	if (nb < 0)
		return (0);
	while (nb != 0)
	{
		num = num * nb;
		nb--;
	}
	return (num);
}
