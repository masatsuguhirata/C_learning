
#include <stdio.h>
#include <string.h>
#include "ex00/strcpy.c"
#include "ex01/strncpy.c"
#include "ex02/str_is_alpha.c"
#include "ex03/str_is_numeric.c"
#include "ex04/str_is_lowercase.c"
#include "ex05/str_is_uppercase.c"
#include "ex06/str_is_printable.c"
#include "ex07/strupcase.c"
#include "ex08/strlowcase.c"
#include "ex09/strcapitalize.c"
#include "ex10/strlcpy.c"
//#include "ex11/putstr_non_printable.c"
//#include "ex12/print_memory.c"


//char *strncpy(char *dest, char *src, unsigned int n);
//int str_is_alpha(char *str);
//int str_is_lowercase(char *str);
//int str_is_uppercase(char *str);
//int str_is_printable(char *str);
//char *strupcase(char *str);
//char *strlowcase(char *str);
//char *strcapitalize(char *str);
unsigned int strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	//ex10
	printf("--ex10--\n");
	//src の長さが n 以上のときには n 文字をコピーしますが、このときに '\0' の自動付加は行わないので注意が必要です。
	char src_ex10[]="abcdefg";
	char dest_ex10[]="1234567890";
	char src1_ex10[]="abcdefg";
	char dest1_ex10[]="1234567890";
	unsigned int length=4;
	printf("std-lib    --> %lu\n", strlcpy(dest_ex10,src_ex10,length));
	printf("work output--> %d\n\n", strlcpy(dest1_ex10,src1_ex10,length));
	// char source_ex10[]="abcdefkjhg";
	// char destination_ex10[]="1234567890";
	// char source1_ex10[]="abcdefkhjg";
	// char destination1_ex10[]="1234567890";
	// printf("std-lib    --> %d\n", strlcpy(destination,source_ex10,length));
	// printf("work output--> %d\n\n", strncpy(destination,source_ex10,length));
	//② src の長さが n より少ない場合には残りの文字を '\0' で埋めます。

	char srchoge_ex10[]="abcde";
	char desthoge_ex10[]="1234567890";
	char srchoge1_ex10[]="abcde";
	char desthoge1_ex10[]="1234567890";
	length=8;
	printf("std-lib    --> %lu\n", strlcpy(desthoge_ex10,srchoge_ex10,length));
	printf("work output--> %d\n", strlcpy(desthoge1_ex10,srchoge1_ex10,length));

	// char src4_3__ex10[]="abcdefghijklmn";
	// char dest4__ex10[]="";
	// char src4_3_1_ex10[]="abcdefghijklmn";
	// char dest4_1_ex10[]="";
	// length = 8;
	// printf("std-lib    --> %lu\n", strlcpy(dest4__ex10,src4_3__ex10,length));
	// printf("work output--> %d\n", strlcpy(dest4_1_ex10,src4_3_1_ex10,length));

	// char src3_3__ex10[]="abcdefghijklmn";
	// char dest3__ex10[]="1234567890";
	// char src3_3_1_ex10[]="abcdefghijklmn";
	// char dest3_1_ex10[]="1234567890";
	// length = 100;
	// printf("std-lib    --> %lu\n", strlcpy(dest3__ex10,src3_3__ex10,length));
	// printf("work output--> %d\n", strlcpy(dest3_1_ex10,src3_3_1_ex10,length));

	//ex09
	printf("--ex09--\n");
	printf("%c\n",' '+30);
	char str1_ex09[]="salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("original %s -->\n",str1_ex09);
	printf("expected Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un -->\n");
	printf("work     %s\n",strcapitalize(str1_ex09));

	//ex08
	printf("--ex08--\n");
	char str1_ex08[]="az'{@[ZA";
	printf("%s --> ",str1_ex08);
	printf("%s\n",strlowcase(str1_ex08));

	//ex07
	printf("\n--ex07--\n");
	char str1_ex07[]="az'{@[ZA";
	printf("%s --> ",str1_ex07);
	printf("%s \n",strupcase(str1_ex07));

	//ex06
	printf("\n--ex06--\n");
	int cnt;
	for (cnt=0;cnt<20;cnt++){
		printf("%d:%c\n",cnt,'!'-cnt);
	}

	char str1_ex06[]="!";
	str1_ex06[0]=32;
	char str2_ex06[]="!";
	str2_ex06[0]=31;
	char str3_ex06[]="~";
	char str4_ex06[]="~";
	str4_ex06[0]='~'+1;
	char str5_ex06[]="";
	printf("%d(expected 1) <--%s;\n",str_is_printable(str1_ex06),str1_ex06);
	printf("%d(expected 0) <--%s;\n",str_is_printable(str2_ex06),str2_ex06);
	printf("%d(expected 1) <--%s;\n",str_is_printable(str3_ex06),str3_ex06);
	printf("%d(expected 1) <--%s;(del)\n",str_is_printable(str4_ex06),str4_ex06);
	printf("%d(expected 1) <--%s;(NULL)\n",str_is_printable(str5_ex06),str4_ex06);

	//ex05
	printf("\n--ex05--\n");
	char str1_ex05[]="AZQWERTYUIOPASDFGHJKLZXCVBNM";
	char str2_ex05[]="@";
	char str3_ex05[]="[";
	char str4_ex05[]="";
	printf("%d(expected 1) <-- %s\n",str_is_uppercase(str1_ex05),str1_ex05);
	printf("%d(expected 0) <-- %s\n",str_is_uppercase(str2_ex05),str2_ex05);
	printf("%d(expected 0) <-- %s\n",str_is_uppercase(str3_ex05),str3_ex05);
	printf("%d(expected 1) <-- %s\n",str_is_uppercase(str4_ex05),str4_ex05);

	//ex04
	printf("\n--ex04--\n");
	char str1_ex04[]="azqwertyuiopsdfghjklzxcvbnm";
	char str2_ex04[]="'";
	char str3_ex04[]="{";
	char str4_ex04[]="";
	printf("only num     --> %d\n",str_is_lowercase(str1_ex04));
	printf("other char/  --> %d\n",str_is_lowercase(str2_ex04));
	printf("other char:  --> %d\n",str_is_lowercase(str3_ex04));
	printf("str null     --> %d\n",str_is_lowercase(str4_ex04));

	// //ex03
	printf("\n--ex03--\n");
	char str1_ex03[]="098765432112345678902";
	char str2_ex03[]="/";
	char str3_ex03[]=":";
	char str4_ex03[]="";
	printf("only num     --> %d\n",str_is_numeric(str1_ex03));
	printf("other char/  --> %d\n",str_is_numeric(str2_ex03));
	printf("other char:  --> %d\n",str_is_numeric(str3_ex03));
	printf("str null     --> %d\n",str_is_numeric(str4_ex03));;

	//ex02
	printf("\n--ex02--\n");
	char str1_ex02[]="azAZqwertyuiopasdfghjklzxcvbnm";
	char str2_ex02[]="test123asdf+_{}";
	printf("only alpha   --> %d\n",str_is_alpha(str1_ex02));
	printf("other char   --> %d\n",str_is_alpha(str2_ex02));

	//ex01
	printf("\n--ex01--\n");
	//src の長さが n 以上のときには n 文字をコピーしますが、このときに '\0' の自動付加は行わないので注意が必要です。
	char src[]="abcdefg";
	char dest[]="1234567890";
	char src1[]="abcdefg";
	char dest1[]="1234567890";
	length=4;
	printf("std-lib    --> %s\n", strncpy(dest,src,length));
	printf("work output--> %s\n\n", strncpy(dest1,src1,length));

	// char source[]="abcdefkjhg";
	// char destination[]="1234567890";
	// char source1[]="abcdefkhjg";
	// char destination1[]="1234567890";
	// printf("std-lib    --> %s\n", strncpy(destination,source,length));
	// printf("work output--> %s\n\n", strncpy(destination,source,length));

	//② src の長さが n より少ない場合には残りの文字を '\0' で埋めます。
	char srchoge[]="abcde";
	char desthoge[]="1234567890";
	char srchoge1[]="abcde";
	char desthoge1[]="1234567890";
	length=8;
	printf("std-lib    --> %s\n", strncpy(desthoge,srchoge,length));
	printf("work output--> %s\n\n", strncpy(desthoge1,srchoge1,length));

	char src3_3_[]="abcdefghijklmn";
	char dest3_[]="1234567890";
	char src3_3_1[]="abcdefghijklmn";
	char dest3_1[]="1234567890";
	length = 100;
	printf("std-lib    --> %s\n", strncpy(dest3_,src3_3_,length));
	printf("work output--> %s\n", strncpy(dest3_1,src3_3_1,length));
}
