
#include <unistd.h>

void	print_reverse_alphabet(void)
{
	int		i;
	char	alphabet;

	alphabet = 'z';
	i = 0;
	while (i < 26)
	{
		write(1, &alphabet, 1);
		i++;
		alphabet--;
	}
}
