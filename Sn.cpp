#include<stdio.h>
#include<stdlib.h>

long func(int a,int n)
{
	int sum = a;
	while( n != 1 )
	{
		sum *= 10;
		sum += a;
		n--;
	}
	return sum;
}

int main()
{
	long sum=0;
	int a,n,i;

	puts("Please input a");
	scanf("%d",&a);

	puts("Please input n");
	scanf("%d",&n);

	for( i = 1;i <= n;i++)
	{
		sum += func(a,i);
	}

	printf("The result is%ld\n",sum);
	system("pause");
	return 0;
}