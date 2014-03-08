#include<stdio.h>
int leap(int n) {
	if ((0 == n % 4 && 0 != n % 100) || (0 == n % 400))
		return 1;
	else 
		return 0;
}
int main() {
	int y, m, d;
	int i, n;
	int mon[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	while (EOF != scanf("%d %d %d", &y, &m, &d)) {
		n = 0;
		if (y > 2012) {

			for (i = 2013; i < y; i++) {
				if (1 == leap(i))
					n += 366;
				else 
					n += 365;
			}

			if (1 == leap(y))
				mon[1] = 29;
			else 
				mon[1] = 28;

			for (i = 0; i < m - 1; i++) {
				n += mon[i];
			}
			n += d;
			n += 61;

		} else {
			if (11 == m)
				n = d;
			else
				n = 30 + d;
		}
		n = n % 5;
		if (4 == n || 0 == n)
			printf("Drying\n");
		else 
			printf("Fishing\n");

	}
	return 0;
}