#include "ex00/putchar.c"
#include "ex01/print_alphabet.c"
#include "ex02/print_reverse_alphabet.c"
#include "ex03/print_numbers.c"
#include "ex04/is_negative.c"
//#include "ex05/print_comb.c"
//#include "ex06/print_comb2.c"
//#include "ex07/putnbr.c"
// #include "ex08/print_combn.c"
​
#include <stdio.h>
​
int	main(void)
{
	// ex00
	printf("//---ex00--//\n");
	putchar('a');
	printf("\n");
​
	// ex01
	printf("//---ex01--//\n");
	print_alphabet();
	printf("\n");
​
	// ex02
	printf("//---ex02--//\n");
	print_reverse_alphabet();
	printf("\n");
​
	// ex03
	printf("//---ex03--//\n");
	print_numbers();
	printf("\n");
​
	// ex04
	printf("//---ex04--//\n");
	is_negative(5);  // P
	is_negative(-5); // N
	is_negative(0);  // P
	printf("\n");
​
//	// ex05
//	printf("//---ex05--//\n");
//	print_comb();
//	printf("\n");
//​
//	// ex06
//	printf("//---ex06--//\n");
//	print_comb2();
//	printf("\n");
//​
//	// ex07
//	printf("//---ex07--//\n");
//	putnbr(42);
//	printf("\n");
//	putnbr(-42);
//	printf("\n");
//	putnbr(0);
//	printf("\n");
//	putnbr(2147483647);  // 上限
//	printf("\n");
//	putnbr(-2147483648); // 下限
//	printf("\n");
//​
	// ex08
	printf("//---ex08--//\n");
	// print_combn(1);
	// printf("\n");
	// print_combn(3);
	// printf("\n");
	// print_combn(5);
	// printf("\n");
	// print_combn(7);
	// printf("\n");
	// print_combn(9);
	// printf("\n");
	return 0;
}
