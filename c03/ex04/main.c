//int strcmp(char *s1, char *s2);
//int strncmp(char *s1, char *s2, unsigned int n);
//char *strcat(char *dest, char *src);
//char *strncat(char *dest, char *src, unsigned int nb);
char *strstr(char *str, char *to_find);
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

	printf("\n\n--ex04--\n");
	char    ftex04_s1[] = "abcdefghijklmn";        /* 検索対象文字列 */
	char    ftex04_s2[] = "defgh";                 /* 一致する場合 */
	char    ftex04_s3[] = "xyz";                   /* 一致しない場合 */
	char    ftex04_s4[] = "abcdefghijklmnopqr";    /* 検索対象文字列より長い場合 */
	char    ftex04_s5[] = "";                      /* \0 */
	char    *ftex04_sp;

	ftex04_sp = strstr(ftex04_s1,ftex04_s2);
	printf("一致する場合 : %s\n",ftex04_sp);
	ftex04_sp = strstr(ftex04_s1,ftex04_s3);
	printf("一致しない場合 : %s\n",ftex04_sp);
	ftex04_sp = strstr(ftex04_s1,ftex04_s4);
	printf("検索対象文字列より長い場合 : %s\n",ftex04_sp);
	ftex04_sp = strstr(ftex04_s1,ftex04_s5);
	printf("\\0 : %s\n",ftex04_sp);


}
