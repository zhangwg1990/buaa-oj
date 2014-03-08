#include<stdio.h>
int fun(int n) {
	int i, sum;
	i = 1;
	sum = 0;
	if (1 == n)
		return 0;
	while (i < n) {
		if (0 == n % i)
			sum += i;
		i++;
	}
	return sum;
}
int main() {
	int m, n;
	int a, b;
	int flag;
	while (EOF != scanf("%d %d", &m, &n)) {
		flag = 0;
		for (a = m; a <= n; a++) {
			b = fun(a);
			if (a == fun(b) && a < b && b <= n) {
				printf("%d %d\n", a, b);
				flag = 1;
			}
		}
		if (0 == flag) 
			printf("NONE\n");
	}
	return 0;
}