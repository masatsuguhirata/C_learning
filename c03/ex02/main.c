//int strcmp(char *s1, char *s2);
//int strncmp(char *s1, char *s2, unsigned int n);
char *strcat(char *dest, char *src);
//char *strncat(char *dest, char *src, unsigned int nb);
//char *strstr(char *str, char *to_find);
//unsigned int strlcat(char *dest, char *src, unsigned int size);
// #include "ex03/strncat.c"
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


	// //===ex00====
	// printf("\n\n--ex00--\n");
	// char char1_ex1[]="asdfghjkl90ppp";
	// char char2_ex1[]="asdfghjkl1pppp";
	// char char3_ex1[]="asdfghjkl90ppp";
	// printf("strcpy   第1引数 < 第2引数の場合  %d\n",strcmp(char1_ex1, char2_ex1));
	// printf("strcpy   第1引数 > 第2引数の場合  %d\n",strcmp(char2_ex1, char1_ex1));
 	// printf("strcpy   第1引数 = 第2引数の場合  %d\n",strcmp(char1_ex1, char3_ex1));
	// printf("ftstrcpy 第1引数 < 第2引数の場合  %d\n",strcmp(char1_ex1, char2_ex1));
	// printf("ftstrcpy 第1引数 > 第2引数の場合  %d\n",strcmp(char2_ex1, char1_ex1));
 	// printf("ftstrcpy 第1引数 = 第2引数の場合  %d\n",strcmp(char1_ex1, char3_ex1));



	// //===ex01====
	// printf("\n\n--ex01--\n");
	// int stdlib;
 	// /* 3byteまで同じで3byteまでを比較 str1==str2 */
 	// stdlib = strncmp( "12311x" , "12300" , 3 );
 	// printf( "stdlib=%d\n" , stdlib );/* 0 */
 	// /* 3byteまで同じで4byteまでを比較 str1>str2 */
 	// stdlib = strncmp( "12391x" , "12300" , 4 );
 	// printf( "stdlib=%d\n" , stdlib );/* 正の値 */
 	// /* 3byteまで同じで4byteまでを比較 str1<str2 */
 	// stdlib = strncmp( "12300" , "123a1x" , 4 );
 	// printf( "stdlib=%d\n" , stdlib );/* 負の値 */
 	// /* 5byteまで同じで最大比較10byte(len)だが、
 	//               実際は6byte目のNULLまでを比較 str1==str2 */
 	// stdlib = strncmp( "12300" , "12300" , 10 );
 	// printf( "stdlib=%d\n" , stdlib );/* 0 */
 	// /* 5byteまで同じで最大比較10byte(len)だが、
 	//               実際は6byte目のNULLまでを比較 str1>str2 */
 	// stdlib = strncmp( "12300k" , "12300" , 10 );
 	// printf( "stdlib=%d\n" , stdlib );/* 正の値 */
 	// /* 5byteまで同じで最大比較10byte(len)だが、
 	//               実際は6byte目のNULLまでを比較 str1<str2 */
 	// stdlib = strncmp( "12300" , "12300x" , 10 );
 	// printf( "stdlib=%d\n" , stdlib );/* 負の値 */

	// int ftstrcmp;
 	// /* 3byteまで同じで3byteまでを比較 str1==str2 */
 	// ftstrcmp = strncmp( "12311x" , "12300" , 3 );
 	// printf( "\nftstrcmp=%d\n" , ftstrcmp );/* 0 */
 	// /* 3byteまで同じで4byteまでを比較 str1>str2 */
 	// ftstrcmp = strncmp( "12391x" , "12300" , 4 );
 	// printf( "ftstrcmp=%d\n" , ftstrcmp );/* 正の値 */
 	// /* 3byteまで同じで4byteまでを比較 str1<str2 */
 	// ftstrcmp = strncmp( "12300" , "123a1x" , 4 );
 	// printf( "ftstrcmp=%d\n" , ftstrcmp );/* 負の値 */
 	// /* 5byteまで同じで最大比較10byte(len)だが、
 	//               実際は6byte目のNULLまでを比較 str1==str2 */
 	// ftstrcmp = strncmp( "12300" , "12300" , 10 );
 	// printf( "ftstrcmp=%d\n" , ftstrcmp );/* 0 */
 	// /* 5byteまで同じで最大比較10byte(len)だが、
 	//               実際は6byte目のNULLまでを比較 str1>str2 */
 	// ftstrcmp = strncmp( "12300k" , "12300" , 10 );
 	// printf( "ftstrcmp=%d\n" , ftstrcmp );/* 正の値 */
 	// /* 5byteまで同じで最大比較10byte(len)だが、
 	//               実際は6byte目のNULLまでを比較 str1<str2 */
 	// ftstrcmp = strncmp( "12300" , "12300x" , 10 );
 	// printf( "ftstrcmp=%d\n" , ftstrcmp );/* 負の値 */



	printf("\n\n--ex02--\n");
    char str1[30] = "ABC";
    char str2[] = "123";
    char *p = "abcd";
    strcat(str1, str2);     /* 文字型配列に文字型配列を連結 */
    printf("%s\n", str1);
    strcat(str1, p);        /* 文字型配列にポインタの指す文字列リテラルを連結 */
    printf("%s\n", str1);
    strcat(str1, "xyz");    /* 文字型配列に文字列リテラルを連結 */
    printf("%s\n", str1);

    char ftstrcatex02[30] = "ABC";
    char ftstrcat2ex02[] = "123";
    char *pftstrcat = "abcd";
    strcat(ftstrcatex02, ftstrcat2ex02);     /* 文字型配列に文字型配列を連結 */
    printf("%s\n", ftstrcatex02);
    strcat(ftstrcatex02, pftstrcat);        /* 文字型配列にポインタの指す文字列リテラルを連結 */
    printf("%s\n", ftstrcatex02);
    strcat(ftstrcatex02, "xyz");    /* 文字型配列に文字列リテラルを連結 */
    printf("%s\n", ftstrcatex02);


	printf("\n\n--ex03--\n");
	printf("\n\n--ex04--\n");
	printf("\n\n--ex05--\n");

}
