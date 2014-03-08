/*求分段函数的值*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	float x, y;

	puts("Please input the x");
	scanf("%f",&x);

	if (0 == x)
		y = 1;
	else if (x > 0)
		y = 1 + exp(x);
	else 
		y = log(pow(x,2));

	printf("The result is %f\n",y);
	system("pause");
	return 0;
}