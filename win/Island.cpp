/*2.������������С�����
       1 1 1 1 1 1
       1 1 0 0 0 1
       1 0 0 0 1 0
       1 1 0 1 1 1
       0 1 0 1 0 0
       1 1 1 1 1 1
���������е�1�������ߣ�0����С������С�����������1�а�Χ��0�ĸ�������
ע�⣺����������0����0�������б�����1��Χ����0�������б�����1��Χ��
���룺��һ������һ������N����ʾ���뷽���ά��
  	  ����һ��Nά����
�����С�����
�������룺
6
1 1 1 1 1 1
1 1 0 0 0 1
1 0 0 0 1 0
1 1 0 1 1 1
0 1 0 1 0 0
1 1 1 1 1 1
���������8*/
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