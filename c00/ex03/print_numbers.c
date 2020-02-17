
#include <unistd.h>

void	print_numbers(void)
{
	int		i;
	char	num;

	num = '0';
	i = 0;
	while (i < 10)
	{
		write(1, &num, 1);
		i++;
		num++;
	}
}
