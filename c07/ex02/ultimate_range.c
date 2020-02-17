
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int		ultimate_range(int **range, int min, int max)
{
	int size;
	int i;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(**range) * (size));
	if (*range == NULL)
		return (-1);
	while (i < max - min)
	{
		range[0][i] = min + i;
		i++;
	}
	return (i);
}

/*
** int main(int argc, char **argv)
** {
** 	printf("argc %d\n",argc);
** 	if (argc == 2){
** 	char *char_arg1=argv[1];
** 	printf("arg1 %s\n",char_arg1);
** 	}
** 	if (argc == 3){
** 	char *char_arg2=argv[2];
** 	printf("arg2 %s\n",char_arg2);
** 	}
**
** 	//===ex00====
** 	printf("\n\n--ex02--\n");
**
** 	printf("argv[1]:%d\n",(int)(*argv[1]-'0'));
** 	printf("argv[2]:%d\n",(int)(*argv[2]-'0'));
**
** 	int min = (int)(*argv[1]-'0');
** 	int max = (int)(*argv[2]-'0');
** 	int i;
**
** #if 1
** 	int *res;
** 	int size;
** 	size = ultimate_range(&res,min,max);
** 	printf("main_size	%d\n\n",size);
** 	for (i=0;i<max - min;i++)
** 	{
** 		printf("res[%d]	%d\n",i,res[i]);
** 	}
** 	free(res);
**
** #else
** 	printf("else消すと、*arrayが存在しないためsegmentation faultになる仕様");
** 	int **array;
** 	array = NULL;
** 	printf("%d",ultimate_range(array,min,max));
**
** 	for (i=0;i<max-min;i++)
** 	{
** 		//printf("%d,",*array[i]);
** 		printf("%d,",*(*(array+i)));
** 		 //	printf("%d\n",**array);
** 	 	printf("main_array	%d,\n",*(*(array+i)));
** 	}
** 	free(array);
** #endif
**
** 	return(0);
** }
*/

/*
** 冗長な書き方
** int	ultimate_range(int **range, int min, int max)
** {
** 	int *array;
** 	int size;
** 	int i = 0;
**
** 	size = max - min;
** 	if (min > max)
** 	{
** 		*range = NULL;
** printf("01\n");
** 		return (0);
** 	}
**
** 	// rangeのサイズを返します(もしくはエラーの場合、-1を返します)。
**
** 	array = (int*)malloc(sizeof(int) * size);
** //	*range = (int *)malloc(sizeof(**range) * (size));
**
** 	if (range == NULL)
** 		return (-1);
**
** 	//配列を代入する
** 	while (i < max - min)
** 	{
** 		//printf ("04_%d\n",i);
** 		// *(range[i]) = min + 1;
**     	//range[0][i] = min + i;
** 		array[i] = min + i;
** 		printf ("04_%d\n",array[i]);
** //→
** //		array[i] = min+i;
** 		i++;
** 	}
** printf ("05\n");
** //→
** 	//range = &array;
** 	*range = array;
** 	return (i);
** }
*/
