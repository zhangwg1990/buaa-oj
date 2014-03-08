#include<stdio.h>
#include<stdlib.h>
int candy(int n)
{
	if (1 == n)
		return 1;
	else 
		return (candy(n - 1) + 1) * 2;
}
int main()
{
	int n;
	while (EOF != scanf("%d", &n)) {
		printf("%d\n", candy(n));
	}
	system("pause");
	return 0;
}