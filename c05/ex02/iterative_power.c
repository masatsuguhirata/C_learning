
int		iterative_power(int nb, int power)
{
	int num;

	num = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 0)
	{
		num *= nb;
		power--;
	}
	return (num);
}
