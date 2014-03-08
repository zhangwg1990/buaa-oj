#include<stdio.h>
#include<stdlib.h>

long multiply(int a,int b)
{
	if(b == 0)
		return 1;

	long result=a;
	
	for(int i=1;i<b;i++)
		result *= a;
	return result;
}
int main()
{
	long number,result;
	long i;
	int base,a[20],n;
	
	n = 0;
	result = 0;


	printf("Please input the base\n");
	scanf("%d",&base);

	printf("Please input the number\n");
	scanf("%ld",&number);

	i = number;
	while( i != 0)
	{
		a[n] = i % 10;
		i /= 10;
		n ++;
	}

	for(int i=0;i < n;i++)
		result += multiply(base,i) * a[i]; 

	printf("%ld\n",result);
	system("pause");
}
