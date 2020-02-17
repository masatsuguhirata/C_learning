
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

char		*strcat(char *dest, char *src)
{
	char *deststart;

	deststart = dest;
	while (*dest)
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (deststart);
}

int			strlen(char *str)
{
	int count;

	count = 0;
	while (str[count] != 0)
	{
		count++;
	}
	return (count);
}

char		*sizeofmalloc(int size, char **strs, char *sep)
{
	int		sizeofall;
	int		cnt;
	char	*strsmalloc;

	sizeofall = 0;
	cnt = 0;
	sizeofall += strlen(sep) * (size - 1);
	while (cnt < size)
	{
		sizeofall += strlen(strs[cnt]);
		cnt++;
	}
	strsmalloc = (char *)malloc(sizeof(char) * (sizeofall + 1));
	return (strsmalloc);
}

char		*strjoin(int size, char **strs, char *sep)
{
	char	*character_join;
	int		cnt;

	if (size == 0)
	{
		character_join = (char*)malloc(sizeof(char) * 1);
		character_join[0] = '\0';
		return (character_join);
	}
	character_join = sizeofmalloc(size, strs, sep);
	character_join[0] = '\0';
	cnt = 0;
	while (cnt < size)
	{
		character_join = strcat(character_join, strs[cnt]);
		if (cnt != (size - 1))
			character_join = strcat(character_join, sep);
		cnt++;
	}
	return (character_join);
}

/*
** int main(int argc, char **argv){
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
** 	printf("\n\n--ex00--\n");
**
** 	char *array;
** //	char **strs ={"abc", "defg", "ghijkl","mnop"};
** 	char *sep;
**
** 	int size = 3;
** //	char name1[3][5] = { "Rena" , "Yuki" , "Mimi" };
** 	// char *name[3];
** 	// name[0] = "Rena";
** 	// name[1] = "Yuki";
** 	// name[2] = "Mimi";
** 	char *name[3] = { "Rena" , "Yuki" , "Mimi" };
** 	sep = ",?-";
**
** 	array =strjoin(size,name,sep);
** 	printf("strjoin:	[%s]\n",array);
** //	printf("strjoin:	%s",strjoin(size,strs,sep));
** //	printf("strjoin:	%s",strjoin(size,name1,sep));
** 	free(array);
**
** 	char *array2;
** 	char *name1[3] = { "Rena" , "Yuki" , "Mimi" };
** 	array2 =strjoin(0,name1,sep);
** 	printf("\n\n==size 0==\n");
** 	printf("strjoin:[%s]",array2);
** 	printf("%s",array2);
** 	printf("==\n");
**
** 	free(array2);
**
** 	return(0);
** }
*/
