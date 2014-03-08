/*1.【问题描述】
某些整数能分解成若干个连续整数的和的形式，例如
    15 = 1 + 2＋3＋4＋5　
    15 = 4 + 5 + 6
    15 = 7 + 8
某些整数不能分解为连续整数的和，例如：16
输入：一个整数N（N <= 10000）
输出：整数N对应的所有分解组合，按照每个分解中的最小整数从小到大输出，每个分解占一行，
每个数字之间有一个空格（每行最后保留一个空格）；如果没有任何分解组合，则输出NONE。*/

#include<stdio.h>
#include<stdlib.h>

int sum(int a, int b);

int func1(int a,int b)        //此函数用来判断从a开始有没有连续整数相加得b，如果有，返回连续函数项数，若没有，返回0；
{
	int i = 2;

	while (1){
		if (b == sum(a, i)) return i;
		if (sum(a, i) > b) return 0;
		i++;
	}
}

int sum(int a, int n)        //此函数用来求从a开始的连续n项和；
{
	return (((2 * a + n - 1) * n) / 2);
}

int main()
{
	int i, j, n, number, flag = 0;

	puts("Please input the number");
	scanf("%d",&number);

	for (i = 1; i <= (number / 2); i++){
		if (0 != func1(i, number)){
			printf("%d = %d ",number,i);
			for (j = 1;j < func1(i, number); j++)
				printf("+ %d ",i + j);
			puts("");
			flag = 1;
		}
	}
	if (0 == flag) printf("NONE\n");


	system("pause");
	return 0;
}