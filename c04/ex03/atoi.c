
#include <unistd.h>

int		atoi(char *str)
{
	int sign;
	int num;
	int numtmp;

	sign = 0;
	numtmp = 0;
	num = 0;
	while (*str == '\t' || *str == '\n' || *str == '\v' ||\
			*str == '\f' || *str == '\r' || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		numtmp = ((int)*str - 48);
		num = num * 10 + numtmp;
		str++;
	}
	if (sign % 2)
		num *= -1;
	return (num);
}
