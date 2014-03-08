/*求下列分段函数的值。*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	float x, y;
	
	puts("Please input the x");
	scanf("%f", &x);

	if (-1 == x)
		puts("The result is 0");
	else if (x > -1)
		printf("The result is %f\n",1. / (1. + x));
	else if( x < -1)
		printf("The result is %f\n", x * x);

	system("pause");
	return 0;
}