//int strcmp(char *s1, char *s2);
//int strncmp(char *s1, char *s2, unsigned int n);
//char *strcat(char *dest, char *src);
//char *strncat(char *dest, char *src, unsigned int nb);
//char *strstr(char *str, char *to_find);
//unsigned int strlcat(char *dest, char *src, unsigned int size);
#include "ex00/strcmp.c"
#include "ex01/strncmp.c"
#include "ex02/strcat.c"
#include "ex03/strncat.c"
#include "ex04/strstr.c"
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
	char char1_ex1[]="asdfghjkl90ppp";
	char char2_ex1[]="asdfghjkl90p";
	char char3_ex1[]="asdfghjkl90ppp";
	printf("strcpy   第1引数 < 第2引数の場合  %d\n",strcmp(char1_ex1, char2_ex1));
	printf("strcpy   第1引数 > 第2引数の場合  %d\n",strcmp(char2_ex1, char1_ex1));
 	printf("strcpy   第1引数 = 第2引数の場合  %d\n",strcmp(char1_ex1, char3_ex1));
	printf("ftstrcpy 第1引数 < 第2引数の場合  %d\n",strcmp(char1_ex1, char2_ex1));
	printf("ftstrcpy 第1引数 > 第2引数の場合  %d\n",strcmp(char2_ex1, char1_ex1));
 	printf("ftstrcpy 第1引数 = 第2引数の場合  %d\n",strcmp(char1_ex1, char3_ex1));



	//===ex01====
	printf("\n\n--ex01--\n");
	int stdlib;
 	/* 3byteまで同じで3byteまでを比較 str1==str2 */
 	stdlib = strncmp( "12311x" , "12300" , 3 );
 	printf( "stdlib=%d\n" , stdlib );/* 0 */
 	/* 3byteまで同じで4byteまでを比較 str1>str2 */
 	stdlib = strncmp( "12391x" , "12300" , 4 );
 	printf( "stdlib=%d\n" , stdlib );/* 正の値 */
 	/* 3byteまで同じで4byteまでを比較 str1<str2 */
 	stdlib = strncmp( "12300" , "123a1x" , 4 );
 	printf( "stdlib=%d\n" , stdlib );/* 負の値 */
 	/* 5byteまで同じで最大比較10byte(len)だが、
 	              実際は6byte目のNULLまでを比較 str1==str2 */
 	stdlib = strncmp( "12300" , "12300" , 10 );
 	printf( "stdlib=%d\n" , stdlib );/* 0 */
 	/* 5byteまで同じで最大比較10byte(len)だが、
 	              実際は6byte目のNULLまでを比較 str1>str2 */
 	stdlib = strncmp( "12300k" , "12300" , 10 );
 	printf( "stdlib=%d\n" , stdlib );/* 正の値 */
 	/* 5byteまで同じで最大比較10byte(len)だが、
 	              実際は6byte目のNULLまでを比較 str1<str2 */
 	stdlib = strncmp( "12300" , "12300x" , 10 );
 	printf( "stdlib=%d\n" , stdlib );/* 負の値 */

	int ftstrcmp;
 	/* 3byteまで同じで3byteまでを比較 str1==str2 */
 	ftstrcmp = strncmp( "12311x" , "12300" , 3 );
 	printf( "\nftstrcmp=%d\n" , ftstrcmp );/* 0 */
 	/* 3byteまで同じで4byteまでを比較 str1>str2 */
 	ftstrcmp = strncmp( "12391x" , "12300" , 4 );
 	printf( "ftstrcmp=%d\n" , ftstrcmp );/* 正の値 */
 	/* 3byteまで同じで4byteまでを比較 str1<str2 */
 	ftstrcmp = strncmp( "12300" , "123a1x" , 4 );
 	printf( "ftstrcmp=%d\n" , ftstrcmp );/* 負の値 */
 	/* 5byteまで同じで最大比較10byte(len)だが、
 	              実際は6byte目のNULLまでを比較 str1==str2 */
 	ftstrcmp = strncmp( "12300" , "12300" , 10 );
 	printf( "ftstrcmp=%d\n" , ftstrcmp );/* 0 */
 	/* 5byteまで同じで最大比較10byte(len)だが、
 	              実際は6byte目のNULLまでを比較 str1>str2 */
 	ftstrcmp = strncmp( "12300k" , "12300" , 10 );
 	printf( "ftstrcmp=%d\n" , ftstrcmp );/* 正の値 */
 	/* 5byteまで同じで最大比較10byte(len)だが、
 	              実際は6byte目のNULLまでを比較 str1<str2 */
 	ftstrcmp = strncmp( "12300" , "12300x" , 10 );
 	printf( "ftstrcmp=%d\n" , ftstrcmp );/* 負の値 */



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
    char str1_ex03[30] = "ABC";
    char str2_ex03[] = "12345";
	strncat(str1_ex03,str2_ex03,3);
	printf("stdlib   =  %s	nがsrc未満\n",str1_ex03);
    strncat(str1_ex03, str2_ex03, 10);
	printf("stdlib   =  %s	nがsrc以上\n",str1_ex03);

    char strft1_ex03[30] = "ABC";
    char strft2_ex03[] = "12345";
	strncat(strft1_ex03,strft2_ex03,3);
	printf("str   =  %s	nがsrc未満\n",strft1_ex03);
    strncat(strft1_ex03, strft2_ex03, 10);
	printf("str   =  %s	nがsrc以上\n",strft1_ex03);

	printf("\n\n--ex04--\n");
	char    ex04_s1[] = "abcdefghijklmn";        /* 検索対象文字列 */
	char    ex04_s2[] = "defgh";                 /* 一致する場合 */
	char    ex04_s3[] = "xyz";                   /* 一致しない場合 */
	char    ex04_s4[] = "abcdefghijklmnopqr";    /* 検索対象文字列より長い場合 */
	char    ex04_s5[] = "";                      /* \0 */
	char    *ex04_sp;
	ex04_sp = strstr(ex04_s1,ex04_s2);
	printf("一致する場合 : %s\n",ex04_sp);
	ex04_sp = strstr(ex04_s1,ex04_s3);
	printf("一致しない場合 : %s\n",ex04_sp);
	ex04_sp = strstr(ex04_s1,ex04_s4);
	printf("検索対象文字列より長い場合 : %s\n",ex04_sp);
	ex04_sp = strstr(ex04_s1,ex04_s5);
	printf("\\0 : %s\n",ex04_sp);


	char    ftex04_s1[] = "abcdefghijklmn";        /* 検索対象文字列 */
	char    ftex04_s2[] = "defgh";                 /* 一致する場合 */
	char    ftex04_s3[] = "xyz";                   /* 一致しない場合 */
	char    ftex04_s4[] = "abcdefghijklmnopqr";    /* 検索対象文字列より長い場合 */
	char    ftex04_s5[] = "";                      /* \0 */
	char    *ftex04_sp;
	ftex04_sp = strstr(ftex04_s1,ftex04_s2);
	printf("\n\n一致する場合 : %s\n",ftex04_sp);
	ftex04_sp = strstr(ftex04_s1,ftex04_s3);
	printf("一致しない場合 : %s\n",ftex04_sp);
	ftex04_sp = strstr(ftex04_s1,ftex04_s4);
	printf("検索対象文字列より長い場合 : %s\n",ftex04_sp);
	ftex04_sp = strstr(ftex04_s1,ftex04_s5);
	printf("\\0 : %s\n",ftex04_sp);


	printf("\n\n--ex05--\n");

}
