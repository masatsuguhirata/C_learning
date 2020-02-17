
#include <unistd.h>

void	putchar(int i, int j)
{
	char num1[2];
	char num2[2];

	num1[0] = i / 10 + '0';
	num1[1] = i % 10 + '0';
	num2[0] = j / 10 + '0';
	num2[1] = j % 10 + '0';
	write(1, num1, 2);
	write(1, " ", 1);
	write(1, num2, 2);
	if (i != 98)
		write(1, ", ", 2);
}

void	print_comb2(void)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (i <= 98)
	{
		while (j <= 99)
		{
			putchar(i, j);
			j++;
		}
		i++;
		j = i + 1;
	}
}
