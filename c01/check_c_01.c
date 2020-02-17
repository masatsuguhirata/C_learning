#include <stdio.h>
#include <string.h>

#if !defined(EX)
#define EX 8
#endif

#include "ex00/ft.c"
#if 0 < EX
#include "ex01/ultimate_ft.c"
#endif
#if 1 < EX
#include "ex02/swap.c"
#endif
#if 2 < EX
#include "ex03/div_mod.c"
#endif
#if 3 < EX
#include "ex04/ultimate_div_mod.c"
#endif
#if 4 < EX
#include "ex05/putstr.c"
#endif
#if 5 < EX
#include "ex06/strlen.c"
#endif
#if 6 < EX
#include "ex07/rev_int_tab.c"
#endif
#if 7 < EX
#include "ex08/sort_int_tab.c"
#endif

int	main(void)
{
	printf("--ex00--\n");
	int i = 0;
	printf("before: %d\n", i);
	ft(&i);
	printf("after: %d\n", i);
#if 0 < EX
	printf("--ex01--\n");
	int n = 10;
	int *a = &n;
	int **b = &a;
	int ***c = &b;
	int ****d = &c;
	int *****e = &d;
	int ******f = &e;
	int *******g = &f;
	int ********h = &g;
	int *********j = &h;
	printf("before: %d\n", n);
	ultimate_ft(j);
	printf("after:  %d\n", n);
#endif
#if 1 < EX
	printf("--ex02--\n");
	i = 42;
	n = 24;
	printf("before: %d, %d\n", i, n);
	swap(&i, &n);
	printf("after:  %d, %d\n", i, n);
#endif
#if 2 < EX
	printf("--ex03--\n");
	i = 10;
	n = 3;
	int k = 0;
	int l = 0;
	printf("before: i = %d, n = %d k = %d, l = %d\n", i, n, k, l);
	div_mod(i, n, &k, &l);
	printf("after:  i = %d, n = %d k = %d, l = %d\n", i, n, k, l);
#endif
#if 3 < EX
	printf("--ex04--\n");
	i = 10;
	n = 3;
	printf("before: i = %d, n = %d\n", i, n);
	ultimate_div_mod(&i, &n);
	printf("before: i = %d, n = %d\n", i, n);

#endif
#if 4 < EX
	printf("--ex05--\n");
	char s[] = "HELLO, WORLD <3";
	putstr(s);
	printf("   <--- putstr\n");
	printf("%s   <--- printf\n", s);
#endif
#if 5 < EX
	printf("--ex06--\n");
	char v[] = "HELLO, WORLD <3";
	printf("char array: %s\n", v);
	printf("strlen--> %d\n", strlen(v));
	printf("strlen   --> %d\n", (int)strlen(v));
#endif
#if 6 < EX
	printf("--ex07--\n");
	i = 0;
	int size = 5;
	int t[] = {1,2,3,4,5};
	printf("before: ");
	while(i<size){
		printf("%d ", t[i]);
		i++;
	}
	printf("\n");
	rev_int_tab(t, size);
	i = 0;
	printf("after:  ");
	while(i<size){
		printf("%d ", t[i]);
		i++;
	}
	printf("\n");
#endif
#if 7 < EX
	printf("--ex08--\n");
	size = 10;
	int u[] = {2,20, 60,3,50, 4,40, 5,30, 1};
	i = 0;
	printf("before: ");
	while(i<size){
		printf("%d ", u[i]);
		i++;
	}
	printf("\n");
	sort_int_tab(u, size);
	i = 0;
	printf("after:  ");
	while(i<size){
		printf("%d ", u[i]);
		i++;
	}
#endif
	return 0;
}
