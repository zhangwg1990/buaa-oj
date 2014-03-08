/*用递归方法计算下列函数的值：
fx (x, n)=x-x2+x3-x4+......(-1)n-1xn ,n>0
要求：
1) 写出递归函数的原型
2) 编写程序 */
#include<stdio.h>
#include<stdlib.h>
int fx(int x,int n)
{
	if(1 == n)return x;
	if( n % 2 == 1)
		return (x*n + fx(x,n-1));
	else
		return ((-1)*x*n + fx(x,n-1));
}
int main()
{
	int x,n;
	
	puts("Please input x");
	scanf("%d",&x);

	puts("Please input n");
	scanf("%d",&n);

	printf("The result is %d\n",fx(x,n));
	system("pause");
}