
#include <stdio.h>

int		is_prime_ex07(int nb);

int		find_next_prime(int nb)
{
	int isprime;

	while (nb <= 2147483647)
	{
		isprime = is_prime_ex07(nb);
		if (isprime)
		{
			return (nb);
		}
		nb++;
	}
	return (0);
}

int		is_prime_ex07(int nb)
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
