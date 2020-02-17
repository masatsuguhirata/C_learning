// int iterative_factorial(int nb);
// int recursive_factorial(int nb);
// int iterative_power(int nb, int power);
// int recursive_power(int nb, int power);
// int fibonacci(int index);
int sqrt(int nb);
// int is_prime(int nb);

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// #include "ex00/iterative_factorial.c"
// #include "ex01/recursive_factorial.c"
// #include "ex02/iterative_power.c"
// #include "ex03/recursive_power.c"
// #include "ex04/fibonacci.c"
// #include "ex05/sqrt.c"
// #include "ex06/is_prime.c"
// #include "ex07/find_next_prime.c"

int main(){

#if 0
	//===ex05====
	printf("\n\n--ex05--\n");
	printf("index%d:	%d\n",2147302921,sqrt(2147302921));
	printf("index4:	%d\n",sqrt(4));
	printf("index2:	%d\n",sqrt(2));
	printf("index1:	%d\n",sqrt(1));
	printf("index0:	%d\n",sqrt(0));
	printf("index-1; %d\n",sqrt(-1));

	printf("\n\n--追加ケース--\n");

	int test[9] =
	{
		-2587,
		0,
		1,
		2,
		1640045925,
		2147395600,
		2147483646,
		18879025,
		5,
	};
	int i;
	for (i=0;i<9;i++)
		printf("index%d; %d\n",test[i],sqrt(test[i]));
#elif 0
	printf("index1:	%d\n",sqrt(1));
	printf("index2417395600:	%d\n",sqrt(2147395600));
#else
	int tmp;
	int i;
	//for (i = 0;i <= INT_MAX; i++)
	for (i = 0;i <= INT_MAX; i++)
	{
		tmp = sqrt(i);
		if (tmp)
		printf("index%d; %d\n",i,tmp);
	}
#endif

}
// sqrt of -2587 is 0$
//  sqrt of 0 is 0$
// -sqrt of 1 is 0$
// +sqrt of 1 is 1$
//  sqrt of 2 is 0$
//  sqrt of 1640045925 is 0$
// -sqrt of 2147395600 is 0$
// +sqrt of 2147395600 is 46340$
//  sqrt of 2147483646 is 0$
//  sqrt of 18879025 is 4345$
//  sqrt of 544905361 is 0$
