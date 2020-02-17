#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

// #include "ex00/strlen.c"
// #include "ex01/putstr.c"
// #include "ex02/putnbr.c"
// #include "ex03/atoi.c"
// #include "ex04/putnbr_base.c"
//#include "ex05/atoi_base."

//int strlen(char *str);
//void putstr(char *str);
//void putnbr(int nb);
int atoi(char *str);
//void putnbr_base(int nbr, char *base);
//int atoi_base(char *str, char *base);


int main(int argc, char **argv){
	char *char_arg1=argv[1];
	char *char_arg2=argv[2];
	int lib;
	printf("arg1 %s\n",char_arg1);
	printf("arg2 %s\n",char_arg2);
	printf("argc %d\n",argc);


	lib = atoi(" ---+--+1234ab567");
	printf("ft1 : %d\n\n",lib);
	printf("ft2 : %d\n\n",lib = atoi(char_arg1));
	printf("ft3 : %d\n\n",lib = atoi(char_arg2));
	return (0);
}
