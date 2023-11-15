#include<stdio.h>
int main()
{
	int a[10], i, j, k,t=1;
	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	printf("\n");
	for (i = 0; i < 9; i++) {
		for (j = 9; j > i; j--) {
			if (a[j] < a[j- 1]) {
				k = a[j];
				a[j] = a[j - 1];
				a[j -1] = k;
				t = 0;
			}
		}
		if (t == 1)break;
	}
	for (i = 0; i < 10; i++) {
		printf("%4d", a[i]);
	}
}