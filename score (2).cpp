#include<stdio.h>
#include<stdlib.h>
int main()
{
	float a[9], max , min , sum , avg;
	int i;

	sum = 0;
	
	for( i = 0; i < 10; i ++)
		scanf("%f",&a[i]);

	max = min =a[0];
	for( i = 0 ; i < 10 ; i ++)
	{
		sum = sum + a[i];

		max = ( max > a[i] )? max : a[i];
		( min < a[i] )? 0 : (min = a[i]);
	}

	avg = (sum - max - min) / 8;

	printf ("%f\n",avg);
	system ("pause");
}