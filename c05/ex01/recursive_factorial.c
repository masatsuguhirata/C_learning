
int		recursive_factorial(int nb)
{
	int num;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	num = nb * recursive_factorial(nb - 1);
	return (num);
}
