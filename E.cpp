/*用台劳级数求e的近似值，直到最后一项小于10-6
e=1+1/1!+1/2!+1/3!+ ……*/
#include<stdio.h>
#include<stdlib.h>
int factorial(int n)
{
	int result = 1, i = 1;
	while (i <= n){
		result *= i;
		i++;
	}
	return result;
}
int main()
{
	int i = 1;
	float e = 0, temp = 1;

	while (temp > 1e-6)
	{
		e += temp;
		temp = 1.0 / factorial(i);
		i++;
	}
	printf("My calculation of E is %f\n",e);
	system("pause");
	return 0;
}