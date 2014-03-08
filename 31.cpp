#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*int c(int n, int i)
{
	int j, numerator = 1, denominator = 1;
	if ((i == 0) || (i == n))
		return 1;
	if (i > n / 2)
		i = n - i;
	for (j = 1; j <= i; j++) {
		numerator *= j;
		denominator *= n - j + 1;
	}
	//printf("C %d %d = %d/%d\n", n, i, denominator ,numerator);
	return (denominator / numerator);
}*/
int main()
{
	int n, i;
	int f1, f2, f;
	while (EOF != scanf("%d", &n)) {
		f1 = f2 = 1;
		if (0 == n)
			printf("%d\n", 0);
		else if ((1 == n) || (2 == n))
			printf("%d\n", 1);
		else {
			for (i = 1; i < n - 1; i++) {
				f = (f1 + f2) % 10007;
				f1 = f2 % 10007;
				f2 = f % 10007;
			}
			printf("%d\n", f);
		}
	}
	/*while (EOF != scanf("%d", &n)) {
		sum = 0;
		for (i = 0; i < (n + 1) / 2; i++)
			sum += c(n - i - 1, i);
		sum = sum % 10007;
		printf("%d\n", sum);
	}*/
	system("pause");
	return 0;
}