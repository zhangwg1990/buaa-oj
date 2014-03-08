#include<stdio.h>
int main() {
	int a, b, k;
	int n;
	while (1) {
		scanf("%d %d %d", &a, &b, &k);
		if (!a && !b) break;
		n = 1;
		while (k--) n *= 10;
		if ((a % n) == (b % n))
			printf("%d\n", -1);
		else 
			printf("%d\n", a + b);
	}
	return 0;
}