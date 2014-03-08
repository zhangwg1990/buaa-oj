#include<stdio.h>
#include<stdlib.h>

extern int mysum(int, int);

int my_cmp(const void *a, const void *b)
{
	int *pa = (int *)a;
	int *pb = (int *)b;

	return *pa - *pb;
}

int main()
{
	int a[10] = {12,2,8,22,16,4,10,6,14,20};
	int b[10];
	int i;

	qsort(a, 10, sizeof(int), my_cmp);
		for (i = 0; i < 10; ++i) {
			printf("%d ", a[i]);
		}
		printf("\n");
			system("pause");
	return 0;
	int time = 0;
	while (1) {
		printf("time %d: ", time);
		for (i = 0; i < 10; ++i) {
			printf("%d ", a[i]);
		}
		printf("\n");
		// 判断是否能够推出
		int flag = 0;
		for (i = 1; i < 10; ++i) {
			if (a[i] != a[0]) {
				flag = 1;
				break;
			}
		}
		if (0 == flag) {
			// 大家都一样可以退出了
			break;
		}
		// 模拟分糖的过程
		for (i = 0; i < 10; ++i) {
			b[(i+1)%10] = a[i] / 2;
			a[i] /= 2; 
		}
		for (i = 0; i < 10; ++i) {
			a[i] += b[i];
			if (a[i] % 2) {
				a[i] += 1;
			}
		}
		time++;
	}
	printf ("time is %d\n", time);

	system("pause");
	return 0;
}