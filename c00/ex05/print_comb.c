
#include <unistd.h>

void	putchar(char *num)
{
	if (num[0] != '7')
	{
		write(1, num, 3);
		write(1, ", ", 2);
	}
	else
		write(1, num, 3);
}

void	print_comb(void)
{
	char num[3];

	num[2] = '2';
	num[1] = '1';
	num[0] = '0';
	while (num[0] <= '7')
	{
		while (num[1] <= '8')
		{
			while (num[2] <= '9')
			{
				putchar(num);
				num[2] = num[2] + 1;
			}
			num[1]++;
			num[2] = num[1] + 1;
		}
		num[0]++;
		num[1] = num[0] + 1;
		num[2] = num[1] + 1;
	}
}
