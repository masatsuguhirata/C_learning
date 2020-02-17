
int		recursive_power(int nb, int power)
{
	int num;

	num = 0;
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	if (power > 1)
	{
		num = nb * recursive_power(nb, power - 1);
		return (num);
	}
	return (num);
}
