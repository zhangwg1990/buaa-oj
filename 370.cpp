#include<stdio.h>
int main() {
	int x, y, k, n;
	int a, b, sum;
	while (EOF != scanf("%d %d %d", &y, &k, &n)) {
		a = y / k;
		sum = a * k + k;
		x = sum - y;
		n = n - y;
		if (x > n) {
			printf("%d\n", -1);
		} else {
			while (x <= n - k) {
				printf("%d ", x);
				x += k;
			}
			printf("%d\n", x);
		}
	}
	return 0;
}