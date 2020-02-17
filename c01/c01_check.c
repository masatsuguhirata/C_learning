#include <stdio.h>
#include <string.h>
#include "ex00/ft.c"
#include "ex01/ultimate_ft.c"
#include "ex02/swap.c"
#include "ex03/div_mod.c"
#include "ex04/ultimate_div_mod.c"
#include "ex05/putstr.c"
#include "ex06/strlen.c"
#include "ex07/rev_int_tab.c"
#include "ex08/sort_int_tab.c"

int main(int argc, char *argv[]){

	switch ((int)*argv[1]-'0'){
		case 0:
			printf("--ex00--\n");
			int i = 0;
			printf("before: %d\n", i);
			ft(&i);
			printf("after: %d\n", i);
			return 0;
		case 1:
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
			return 0;
		case 2:
			printf("--ex02--\n");
			i = 42;
			n = 24;
			printf("before: %d, %d\n", i, n);
			swap(&i, &n);
			printf("after:  %d, %d\n", i, n);
			return 0;
		case 3:
			printf("--ex03--\n");
			i = 10;
			n = 3;
			int k = 0;
			int l = 0;
			printf("before: i = %d, n = %d k = %d, l = %d\n", i, n, k, l);
			div_mod(i, n, &k, &l);
			printf("after:  i = %d, n = %d k = %d, l = %d\n", i, n, k, l);
			return 0;
		case 4:
			printf("--ex04--\n");
			i = 10;
			n = 3;
			printf("before: i = %d, n = %d\n", i, n);
			ultimate_div_mod(&i, &n);
			printf("before: i = %d, n = %d\n", i, n);
			return 0;
		case 5:
			printf("--ex05--\n");
			char s[] = "HELLO, WORLD <3";
			putstr(s);
			printf("   <--- putstr\n");
			printf("%s   <--- printf\n", s);
			return 0;
		case 6:
			printf("--ex06--\n");
			char v[] = "HELLO, WORLD <3";
			printf("char array: %s\n", v);
			printf("strlen--> %d\n", strlen(v));
			printf("strlen   --> %d\n", (int)strlen(v));
			return 0;
		case 7:
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
			return 0;
		case 8:
			printf("--ex08--\n");
			size = 10;
			int u[] = {2,40 ,10,3,50, 4,30, 5,20, 1};
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
			printf("\n");
			return 0;
	}
}
