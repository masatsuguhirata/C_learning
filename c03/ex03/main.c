//int strcmp(char *s1, char *s2);
//int strncmp(char *s1, char *s2, unsigned int n);
//char *strcat(char *dest, char *src);
char *strncat(char *dest, char *src, unsigned int nb);
//char *strstr(char *str, char *to_find);
//unsigned int strlcat(char *dest, char *src, unsigned int size);
// #include "ex05/strlcat.c"
#include <string.h>
#include <stdio.h>

int main(){

	printf("\n\n--ex03--\n");
    char str1_ex03[3] = "ABC";
    char str2_ex03[] = "12345";
	strncat(str1_ex03,str2_ex03,4);
	printf("stdlib   =  %s	nがsrc未満\n",str1_ex03);
    strncat(str1_ex03, str2_ex03, 10);
	printf("stdlib   =  %s	nがsrc以上\n",str1_ex03);

    char strft1_ex03[3] = "ABC";
    char strft2_ex03[] = "12345";
	strncat(strft1_ex03,strft2_ex03,4);
	printf("stdlib   =  %s	nがsrc未満\n",strft1_ex03);
    strncat(strft1_ex03, strft2_ex03, 10);
	printf("stdlib   =  %s	nがsrc以上\n",strft1_ex03);

	printf("\n\n--ex04--\n");
	printf("\n\n--ex05--\n");

}
