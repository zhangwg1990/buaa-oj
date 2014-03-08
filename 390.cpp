#include<stdio.h>
int func(int n) {
	int i = 0;
	while (0 == n % 2) {
		n >>= 1;
		i++;
	}
	n -= 1;
	while (i--) {
		n <<= 1;
	}
	return n;
}
int main() {
	int n;
	int i;
	int num;
	
	while (EOF != scanf("%d", &n)) {
		for (i = 0; i < n; i++) {
			scanf("%d", &num);
			printf("%c", 'a' + func(num) - 1);
		}
		printf("\n");
	}
	return 0;
}