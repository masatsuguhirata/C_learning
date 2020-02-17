
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	write(1, str, i);
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	int cnt;

	cnt = argc - 1;
	while (cnt > 0)
	{
		putstr(argv[cnt]);
		cnt--;
	}
}
