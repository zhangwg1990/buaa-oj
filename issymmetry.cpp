/*编写一个函数：完成判断方阵a[N][N]是否关于主对角线对称(相等)，若对称则返回1，否则返回0。*/
#include<stdio.h>
#include<stdlib.h>
#define N 10

int issymmetry(int a[N][N])
{
	int i, j;
	for (i = 0; i < N; i++)
		for (j = 0; j < i; j++)
			if (a[i][j] != a[j][i])
				return 0;
	return 1;
}
int main()
{
	int a[N][N];
	int i, j;

	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			a[i][j] = i * j;

	for (i = 0; i < N; i++){
		for (j = 0; j < N; j++)
			printf("%3d",a[i][j]);
		puts("");
	}

	if (1 == issymmetry(a))
		puts("This matrix is symmetry");
	else puts("This matrix is not symmetry");

	system("pause");
	return 0;
}