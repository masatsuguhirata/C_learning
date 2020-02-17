
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int	*range(int min, int max)
{
	int size;
	int *dest;
	int arraynum;

	size = max - min;
	if (min >= max)
		return (NULL);
	dest = (int *)malloc(sizeof(int) * size);
	arraynum = 0;
	while (arraynum < size)
	{
		dest[arraynum] = min + arraynum;
		arraynum++;
	}
	return (dest);
}

/*
**int main(int argc, char **argv){
**	printf("argc %d\n",argc);
**	if (argc == 2){
**	char *char_arg1=argv[1];
**	printf("arg1 %s\n",char_arg1);
**	}
**	if (argc == 3){
**	char *char_arg2=argv[2];
**	printf("arg2 %s\n",char_arg2);
**	}
**
**	//===ex00====
**	printf("\n\n--ex00--\n");
**
**	int *dest1;
**	int *dest2;
**	int destmax = 257;
**	int destmin = -5;
**	int i=0;
**	dest1 = range(destmin,destmax);
**
**	while (i <= destmax - destmin)
**	{
**		printf("%d,",dest1[i]);
**		i++;
**	}
**
**	dest2 = range(destmax,destmin);
**	printf("\n%p,",dest2);
**
**	free(dest1);
**	free(dest2);
**	return(0);
**}
*/
