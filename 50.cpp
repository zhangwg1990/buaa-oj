#include<stdio.h>
#include<stdlib.h>
int fn(int n)
{
	if ((1 == n) || (2 == n))
		return 1;
	return fn(n - 1) + fn(n - 2);
}
int main()
{
	int n;
	while (EOF != scanf("%d", &n)) {
		printf("%d\n", fn(n));
	}
	system("pause");
	return 0;
}