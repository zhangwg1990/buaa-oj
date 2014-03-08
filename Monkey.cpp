#include<stdio.h>
#include<stdlib.h>

float test ( float n )
	{
		for(int i = 0; i <= 10; i++)
		{
			n = n / 2;
			n = n - 1;
		}

		return n;
	}

int main ()
{
	float n = 1;

	while ( test(n) != 1)
		n ++;

	printf ("n= %.0f\n", n);
	system ("pause");

	return 0;
}