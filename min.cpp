/*函数int add(int a[N][N] , int b[N])的功能是将a数组中每行的最小元素放入b数组中，
编写该函数实现之*/
#include<stdio.h>
#include<stdlib.h>
#define N 10
int add(int a[N][N],int b[])
{
	int i, j, temp;
	for (i = 0;i < N; i++){
		temp = a[i][0];
		for (j = 0;j < N; j++)
			if (a[i][j] < temp)
				temp = a[i][j];
		b[i] = temp;
	}
	return 1;
}
int main()
{
	int a[N][N], i, j, b[N];
	for (i = 0; i < N; i++){
		for (j = 0; j < N; j++){
			a[i][j] = i - j;
			printf("%4d",a[i][j]);
		}
		puts("");
	}
	add(a, b);
	for (i = 0; i < N; i++)
		printf("%4d",b[i]);
	puts("");
	system("pause");
	return 0;
}