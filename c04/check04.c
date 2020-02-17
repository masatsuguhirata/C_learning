#include <stdio.h>
#include <string.h>
#include "ex00/strlen.c"
#include "ex01/putstr.c"
#include "ex02/putnbr.c"
#include "ex03/atoi.c"
//#include "ex04/putnbr_base.c"
//#include "ex05/atoi_base."

//int strlen(char *str);
//void putstr(char *str);
//void putnbr(int nb);
//int atoi(char *str);
//void putnbr_base(int nbr, char *base);
//int atoi_base(char *str, char *base);


//int main(int argc, char **argv){
int main(){

	//ex00
	printf("--ex00--\n");
	char v[] = "HELLO, WORLD <3";
	printf("char array: %s\n", v);
	printf("strlen--> %d\n", strlen(v));
	printf("strlen   --> %d\n", (int)strlen(v));

	//ex01
	printf("\n--ex01--\n");
	char s[] = "HELLO, WORLD <3";
	putstr(s);
	printf("   <--- putstr\n");
	printf("%s   <--- printf\n", s);

	//ex02
	 printf("\n//---ex02--//\n");
	 putnbr(42);
	 printf("\n");
	 putnbr(-42);
	 printf("\n");
	 putnbr(0);
	 printf("\n");
	 putnbr(2147483647);  // 上限
	 printf("\n");
	 putnbr(-2147483648); // 下限
	 printf("\n");

	//ex03
	printf("\n//---ex03--//\n");
	int lib;
	lib = atoi(" ---+--+1234ab567");
	printf("ft1 : %d\n\n",lib);
	lib = atoi(" --+--+1234567");
	printf("ft2 : %d\n\n",lib);
	lib = atoi(" ---+--+ab");
	printf("ft3 : %d\n\n",lib);

	return (0);
}
