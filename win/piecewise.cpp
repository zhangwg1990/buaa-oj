/*求分段函数的值*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	float x, z;

	puts("Please input the x");
	scanf("%f",&x);

	if (0 == x)
		z = 1;
	else if (x > 0)
		z = log(x) / x;
	else 
		z = sqrt(1 + pow(x,2));

	printf("The result is %f\n",z);
	system("pause");
	return 0;
}