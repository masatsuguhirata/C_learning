#include "boolean.h"
void putstr(char *str)
{
	while (*str)
	write(1, str++, 1);
}

t_bool is_even(int nbr)
{
	return ((EVEN(nbr)) ? TRUE : FALSE);
}

int main(int argc, char **argv)
{
	(void)argv;
	if (is_even(argc - 1) == TRUE)
		putstr(EVEN_MSG);
	else
		putstr(ODD_MSG);
	return (SUCCESS);
}
