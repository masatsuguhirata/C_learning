
#include <unistd.h>

void	print_alphabet(void)
{
	char	alphabet;
	int		num;

	num = 0;
	alphabet = 'a';
	while (num < 26)
	{
		write(1, &alphabet, 1);
		alphabet = alphabet + 1;
		num++;
	}
}
