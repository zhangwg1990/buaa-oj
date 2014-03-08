#include<stdio.h>
#include<stdlib.h>
int fn(int n)
{
	if (1 == n)
		return 2;
	else if (2 == n)
		return 3;
	else if (3 == n)
		return 4;
	else 
		return fn(n - 1) + fn(n - 3);
}
int main()
{
	int n;
	while (EOF != scanf("%d", &n))
		printf("%d\n", fn(n));
	system("pause");
	return 0;
}