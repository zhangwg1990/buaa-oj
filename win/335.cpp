#include<stdio.h>
#include<stdlib.h>
#include<math.h>
long long fac(long long n)
{
	long long i = 1, result = 1;
	while (i <= n) {
		result *= i;
		i++;
	}
	return result;
}
long long f1(long long n)
{
	int i;
	i = n / 2;
	return fac(i) * (long long)pow(2.0, i);
}
int main()
{
	int n;
	while (EOF != scanf("%d", &n)) {
		if (1 == n)
			printf("%d\n", 1);
		else if (1 == n % 2)
			printf("%lld\n", fac(n) / f1(n - 1));
		else 
			printf("%lld\n", f1(n));
	}
	system("pause");
	return 0;
}