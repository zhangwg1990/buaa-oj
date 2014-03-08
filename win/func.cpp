#include<stdio.h>
#include<stdlib.h>
#include<math.h>


double func(double x)
{
	return x*x - 5*x + 4;
}

int main()
{
	double x;
	double y[3];
	int i;
	double test;

	scanf("%lf",&x);


	test = sin(x);
	y[0] = func(2);
	y[1] = func(x+15);
	y[2] = func(sin(x));

	for(i = 0;i < 3;i++)
		printf("Y%d=%f\n",i+1,y[i]);

	system("pause");
	return 0;
}