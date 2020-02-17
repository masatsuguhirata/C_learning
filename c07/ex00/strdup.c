
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <assert.h>

int				strlen(char *str)
{
	int			count;

	count = 0;
	while (str[count] != 0)
	{
		count++;
	}
	return (count);
}

char			*strdup(char *src)
{
	int			size;
	char		*dest;
	int			i;

	size = strlen(src);
	dest = (char*)malloc(sizeof(char) * (size + 1));
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
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
**    const char *src1 = "String";
**    char *dest1 = strdup(src1);
**	printf("stdlib:%s,%s\n",src1,dest1);
**
**    const char *src2 = "";
**    char *dest2 = strdup(src2);
**	printf("stdlib:%s,%s\n",src2,dest2);
**
**	char *ex00_src1 = "String";
**    char *ex00_dest1 = strdup(ex00_src1);
**	printf("ftstrd:%s,%s\n",ex00_src1,ex00_dest1);
**
**    char *ex00_src2 = "";
**    char *ex00_dest2 = strdup(ex00_src2);
**	printf("ftstrd:%s,%s\n",ex00_src2,ex00_dest2);
**
**
**    free(dest1);
**    free(dest2);
**
**	//test
**    free(ex00_dest1);
**    free(ex00_dest2);
**
**	return(0);
**}
*/
