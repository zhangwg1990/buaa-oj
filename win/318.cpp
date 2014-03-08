#include<stdio.h>
#include<stdlib.h>
int lcm(int a, int b)
{
	int i;
	i = (a > b) ? a : b;
	while ((0 != i % a) || (0 != i % b)) i++;
	return i;
}
int gcd(int a, int b)
{
	int i;
	i = (a < b) ? a : b;
	while ((0 != a % i) || (0 != b % i)) i--;
	return i;
}
int main()
{
	int t, a, b;
	scanf("%d", &t);
	while (t --) {
		scanf("%d %d", &a, &b);
		printf("%d %d\n", gcd(a, b), lcm(a, b));
	}
	system("pause");
	return 0;
}