// int iterative_factorial(int nb);
// int recursive_factorial(int nb);
// int iterative_power(int nb, int power);
// int recursive_power(int nb, int power);
// int fibonacci(int index);
// int sqrt(int nb);
// int is_prime(int nb);

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#include "ex00/iterative_factorial.c"
#include "ex01/recursive_factorial.c"
#include "ex02/iterative_power.c"
#include "ex03/recursive_power.c"
#include "ex04/fibonacci.c"
#include "ex05/sqrt.c"
#include "ex06/is_prime.c"
#include "ex07/find_next_prime.c"

int main(){

	//===ex00====
	printf("\n\n--ex00--\n");
	printf("10:	%d\n",iterative_factorial(5));
	printf("1 :	%d\n",iterative_factorial(1));
	printf("0 :	%d\n",iterative_factorial(0));
	printf("-1:	%d\n",iterative_factorial(-1));

	//===ex01====
	printf("\n\n--ex01--\n");
	printf("10:	%d\n",recursive_factorial(5));
	printf("1 :	%d\n",recursive_factorial(1));
	printf("0 :	%d\n",recursive_factorial(0));
	printf("-1:	%d\n",recursive_factorial(-1));

	//===ex02====
	printf("\n\n--ex02--\n");
	printf("2,5:	%d\n",iterative_power(2,5));
	printf("0,1:	%d\n",iterative_power(0,1));
	printf("3,0 :	%d\n",iterative_power(3,0));
	printf("0,0:	%d\n",iterative_power(0,0));
	printf("-2,5:	%d\n",iterative_power(-2,5));
	printf("2,-3:	%d\n",iterative_power(2,-3));

	//===ex03====
	printf("\n\n--ex03--\n");
	printf("2,5:	%d\n",recursive_power(2,5));
	printf("0,1:	%d\n",recursive_power(0,1));
	printf("3,0 :	%d\n",recursive_power(3,0));
	printf("0,0:	%d\n",recursive_power(0,0));
	printf("-2,5:	%d\n",recursive_power(-2,5));
	printf("2,-3:	%d\n",recursive_power(2,-3));

	//===ex04-2====
	printf("\n\n--ex04-2-\n");
	int i;
	i =0;
	for (i=0;i<10;i++)
	{
		printf("fibo_index%d:	%d\n",i,fibonacci(i));
	}


	//===ex05====
	printf("\n\n--ex05--\n");
	printf("index%d:	%d\n",2147302921,sqrt(2147302921));
	printf("index4:	%d\n",sqrt(4));
	printf("index2:	%d\n",sqrt(2));
	printf("index1:	%d\n",sqrt(1));
	printf("index0:	%d\n",sqrt(0));
	printf("index-1; %d\n",sqrt(-1));

	//===ex06====
	printf("\n\n--ex06--\n");

	printf("index4:	%d\n",is_prime(4));
	printf("index2:	%d\n",is_prime(2));
	printf("index1:	%d\n",is_prime(1));
	printf("index0:	%d\n",is_prime(0));
	printf("index-1:	%d\n",is_prime(-1));
	printf("index%d:	%d\n",2147483646,is_prime(2147483646));
	printf("index%d:	%d\n",2147483647,is_prime(2147483647));


	//===ex07====
	printf("\n\n--ex07--\n");
	printf("index4:	%d\n",find_next_prime(4));
	printf("index2:	%d\n",find_next_prime(2));
	printf("index1:	%d\n",find_next_prime(1));
	printf("index0:	%d\n",find_next_prime(0));
	printf("index-1:	%d\n",find_next_prime(-1));
	printf("index%d:	%d\n",INT_MAX-1,find_next_prime(INT_MAX-1));
	printf("index%d:	%d\n",INT_MAX,find_next_prime(INT_MAX));
}
