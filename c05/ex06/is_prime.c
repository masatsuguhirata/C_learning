
int		is_prime(int nb)
{
	int devisor;

	devisor = 3;
	if (nb < 2)
		return (0);
	else if (nb == 2)
		return (1);
	else if (nb % 2 == 0)
		return (0);
	while (devisor < nb / 2)
	{
		if (nb % devisor == 0)
			return (0);
		devisor += 2;
	}
	return (1);
}
