/*任意输入N个数，将它们由大到小排序输出。
冒泡法*/
#include<stdio.h>
#include<stdlib.h>
#define N 10

void swap(int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a[N], i, j, flag = 0, n = 0;
	
	for (i = 0; i < N; i++)
		scanf("%d",a+i);

	for (i = 0; i < N - 1; i++){
		for (j = 0; j < N - 1 - i; j++)
			if (a[j] > a[j+1]){
				swap(a + j, a + j + 1);
				flag = 1;
			}
			n++;
			if (0 == flag) break;
	}
	
	for (i = 0; i < N; i++) printf("%d\t",a[i]);
	printf("\n%d times\n",n);
	system("pause");
	return 0;
}