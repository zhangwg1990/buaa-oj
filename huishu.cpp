#include<stdio.h>
#include<stdlib.h>
int daoshu(int a)
{
	int b=0;
	
	while(a != 0)
	{
		b *= 10;
		b += a%10;
		a /= 10;
	}
	return b;
}

int main()
{
	long int a,b;
	int n = 1;

	puts("Please input a");
	scanf("%ld",&a);

	while( (a != daoshu(a)) && (n <= 7))
	{
		b = daoshu(a);
		printf("#%d\t",n);           //这个\t明显较长
		printf("a = %ld\t",a);
		printf("b = %ld\t",b);      //为何同样是\t，但是空的长度不同？
		printf("sum = %ld\n",a+b);
		a += b;
		n++;
	}

	if(a = daoshu(a))
		printf("a = %ld shi hui shu\n",a);

	system("pause");
}