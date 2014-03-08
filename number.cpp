#include<stdio.h>
#include<stdlib.h>
int main ()
{
	float a;
	int i=0;

	scanf("%f",&a);

	while( a != (int)a )
		a *= 10;

	while ( a >= 1)
	{
		a /= 10;
		i ++;
	}

	printf("%d\n",i);
	system("pause");

}