int strcmp(char *s1, char *s2);
//int strncmp(char *s1, char *s2, unsigned int n);
//char *strcat(char *dest, char *src);
//char *strncat(char *dest, char *src, unsigned int nb);
//char *strstr(char *str, char *to_find);
//unsigned int strlcat(char *dest, char *src, unsigned int size);
// #include "ex04/strstr.c"
// #include "ex05/strlcat.c"
#include <string.h>
#include <stdio.h>

int main(int argc, char **argv){
	char *char_arg1=argv[1];
	char *char_arg2=argv[2];
	printf("arg1 %s\n",char_arg1);
	printf("arg2 %s\n",char_arg2);
	printf("argc %d\n",argc);


	//===ex00====
	printf("\n\n--ex00--\n");
	char char1_ex1[]="l90ppp";
	char char2_ex1[]="l90pp";
	char char3_ex1[]="l90p";
	// char char1_ex1[]="asdfghjkl90ppp";
	// char char2_ex1[]="asdfghjkl90pp";
	// char char3_ex1[]="asdfghjkl90ppp";
	printf("strcpy   第1引数 < 第2引数の場合  %d\n",strcmp(char1_ex1, char2_ex1));
	printf("strcpy   第1引数 > 第2引数の場合  %d\n",strcmp(char2_ex1, char1_ex1));
 	printf("strcpy   第1引数 = 第2引数の場合  %d\n",strcmp(char1_ex1, char3_ex1));
	printf("ftstrcpy 第1引数 < 第2引数の場合  %d\n",strcmp(char1_ex1, char2_ex1));
	printf("ftstrcpy 第1引数 > 第2引数の場合  %d\n",strcmp(char2_ex1, char1_ex1));
 	printf("ftstrcpy 第1引数 = 第2引数の場合  %d\n",strcmp(char1_ex1, char3_ex1));
}
