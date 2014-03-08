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
	int base,n=0;
	char number[60];
	long result=0;
	int i=0;

	printf("Please input the base\n");
	scanf("%d",&base);

	printf("Please input the number\n");
	while( (number[i]=getchar()) != EOF)
		i++;


	i -= 2;
	n=i;


	while( i > 0)
	{
		if( (number[i] >= '0')&&(number[i] <= '9'))
			result += (number[i] - '0') * multiply(base,n-i);
		else
			result += (number[i] - 'A'+10) * multiply(base,n-i);
		i--;
	}

	printf("%ld\n",result);
	system("pause");
}