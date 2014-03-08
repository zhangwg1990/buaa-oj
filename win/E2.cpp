#include<stdio.h>
#include<stdlib.h>
int main()
{
	double e , n ,i;
	e=n=i=1;
	while(i != 50)
	{
		n *= i;
		e += 1/n;
		i ++;
	}
	
	printf("E=%f\n",e);
	system("pause");
}