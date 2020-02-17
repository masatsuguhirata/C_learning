
#include <unistd.h>

void	positive_int(int nb)
{
	int num[10];
	int i;
	int tmp;

	num[9] = nb % 10;
	num[8] = (nb % 100 - nb % 10) / 10;
	num[7] = (nb % 1000 - nb % 100) / 100;
	num[6] = (nb % 10000 - nb % 1000) / 1000;
	num[5] = (nb % 100000 - nb % 10000) / 10000;
	num[4] = (nb % 1000000 - nb % 100000) / 100000;
	num[3] = (nb % 10000000 - nb % 1000000) / 1000000;
	num[2] = (nb % 100000000 - nb % 10000000) / 10000000;
	num[1] = (nb % 1000000000 - nb % 100000000) / 100000000;
	num[0] = (nb % 10000000000 - nb % 1000000000) / 1000000000;
	i = 0;
	while (num[i] == 0 && i != 9)
		i++;
	while (i <= 9)
	{
		tmp = num[i] + '0';
		write(1, &tmp, 1);
		i++;
	}
}

void	negative_int(int nb)
{
	int num[10];
	int i;
	int tmp;

	num[9] = -1 * (nb % 10);
	num[8] = -1 * (nb % 100 - nb % 10) / 10;
	num[7] = -1 * (nb % 1000 - nb % 100) / 100;
	num[6] = -1 * (nb % 10000 - nb % 1000) / 1000;
	num[5] = -1 * (nb % 100000 - nb % 10000) / 10000;
	num[4] = -1 * (nb % 1000000 - nb % 100000) / 100000;
	num[3] = -1 * (nb % 10000000 - nb % 1000000) / 1000000;
	num[2] = -1 * (nb % 100000000 - nb % 10000000) / 10000000;
	num[1] = -1 * (nb % 1000000000 - nb % 100000000) / 100000000;
	num[0] = -1 * (nb % 10000000000 - nb % 1000000000) / 1000000000;
	write(1, "-", 1);
	i = 0;
	while (num[i] == 0 && i != 9)
		i++;
	while (i <= 9)
	{
		tmp = num[i] + '0';
		write(1, &tmp, 1);
		i++;
	}
}

void	putnbr(int nb)
{
	if (nb >= 0)
		positive_int(nb);
	if (nb < 0)
		negative_int(nb);
}
