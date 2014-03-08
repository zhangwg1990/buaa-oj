/*2.【问题描述】小岛面积
       1 1 1 1 1 1
       1 1 0 0 0 1
       1 0 0 0 1 0
       1 1 0 1 1 1
       0 1 0 1 0 0
       1 1 1 1 1 1
上面矩阵的中的1代表海岸线，0代表小岛。求小岛面积（即被1中包围的0的个数）。
注意：仅求这样的0，该0所在行中被两个1包围，该0所在列中被两个1包围。
输入：第一行输入一个整数N，表示输入方阵的维数
  	  输入一个N维方阵
输出：小岛面积
样例输入：
6
1 1 1 1 1 1
1 1 0 0 0 1
1 0 0 0 1 0
1 1 0 1 1 1
0 1 0 1 0 0
1 1 1 1 1 1
样例输出：8*/
#include<stdio.h>
#include<stdlib.h>

int isarea(int i, int j, int n, int *a)
{
	int k, flag;
	if (1 == *(a + i * n + j)) return 0;

	flag = 0;
	for (k = 0; k <= j; k++)
		if (1 == *(a + i * n + k)) flag = 1;
	if (0 == flag) return 0;

	flag = 0;
	for (k = j; k <= n - 1; k++)
		if (1 == *(a + i * n + k)) flag = 1;
	if (0 == flag) return 0;

	flag = 0;
	for (k = 0; k <= i; k++)
		if (1 == *(a + k * n + j)) flag = 1;
	if (0 == flag) return 0;

	flag = 0;
	for (k = i; k <= n - 1; k++)
		if (1 == *(a + k * n + j)) flag = 1;
	if (0 == flag) return 0;
	return 1;
}

int main()
{
	int n, *a, i, j, size = 0;

	puts("Please input the n");
	scanf("%d",&n);

	a = (int *)malloc(n * n * sizeof(int));
	puts("Now please input the matrix");

	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			scanf("%d",a + i * n + j);

	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if (1 == isarea(i, j, n, a)) size++;
	printf("The island is %d of size\n",size);

	system("pause");
	return 0;
}