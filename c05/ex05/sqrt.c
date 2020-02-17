
int		sqrt(int nb)
{
	int sqrt;
	int min;
	int max;

	min = 1;
	max = 46341;
	while (1)
	{
		sqrt = (min + max) / 2;
		if (nb == sqrt * sqrt)
			return (sqrt);
		else if (max == sqrt)
			return (0);
		else if (min == sqrt)
			return (0);
		else if (nb > sqrt * sqrt)
			min = sqrt;
		else if (nb <= sqrt * sqrt)
			max = sqrt;
	}
	return (0);
}

/*
** int		sqrt(int nb)
** {
** 	unsigned int sqrt;
** 	unsigned int numbe
** 	sqrt = 1;
** 	number = (unsigned int)nb;
** 	while (sqrt <= number)
** 	{
** 		if (number <= sqrt*sqrt)
** 			break;
** 		sqrt++;
** 	}
** 	if (number == sqrt*sqrt)
** 		return (sqrt);
** 	return (0);
**
** int		sqrt(int nb)
** {
** 	int sqr
** 	sqrt = 1;
** 	while (sqrt <= nb)
** 	{
** 		if (nb = sqrt*sqrt)
** 			return sqrt;
** 		sqrt++;
** 	}
** 	return (0);
** }
**	#include <stdio.h>
**	#include <stdlib.h>
**	#include <limits.h>
**	int main(){
**		int tmp;
**		int i;
**		//for (i = 0;i <= INT_MAX; i++)
**		for (i = 2143875204;i <= INT_MAX; i++)
**		{
**			tmp = sqrt(i);
**			if (tmp)
**			printf("index%d; %d\n",i,tmp);
**		}
**	}
*/
