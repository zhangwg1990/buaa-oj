#include<stdio.h>
#include<stdlib.h>
int main()
{
	double e, n ;

	e = 1;
	n = 1;
	
	for(int i = 1; i <= 50 ;i++)
	{
		n = n * i;
		e += 1/n;

	}

	printf("E=%f\n",e);
	
	system("pause");
}