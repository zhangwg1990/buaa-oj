#include<stdio.h>
#include<stdlib.h>
typedef struct xterm {		//a * x ^ b;
	int a;
	int b;
}xterm;
int d(int a, int b)			//求x^a的b次导数；
{
	int i, result = 1;
	for (i = 0; i < b; i++) {
		result *= a;
		a--;
	}
	return result;
}
void print1(int a, int b, int m)
{
	if (1 == a && 0 == m)
		printf("x^%d", b);
	else if (-1 == a && 0 == m)
		printf("-x^%d", b);
	else if (b > m + 1) {
		if (0 != a)
			printf("%dx^%d", a * d(b, m), b - m);
	} else if (b == m + 1) {
		if (0 != a)
			printf("%dx", a * d(b, m));
	} else if (b == m){
		if (0 != a)
			printf("%d", a * d(b, m));
	} else {
	}
}
void print2(int a, int b, int m)
{
	if (1 == a && 0 == m)
		printf("+x^%d", b);
	else if (-1 == a && 0 == m)
		printf("-x^%d", b);
	else if (b > m + 1) {
		if (a > 0) {
			printf("+%dx^%d", a * d(b, m), b - m);
		} else if (a < 0){
			printf("%dx^%d", a * d(b, m), b - m);
		} else {
		}
	} else if (b == m + 1) {
		if (a > 0) {
			printf("+%dx", a * d(b, m));
		} else if (a < 0){
			printf("%dx", a * d(b, m));
		} else {
		}
	} else if (b == m) {
		if (a > 0) {
			printf("+%d", a * d(b, m));
		} else if (a < 0) {
			printf("%d", a * d(b, m));
		} else {
		}
	}
}
int main()
{
	xterm *ploy;
	int i, m, n, a, b, first;
	while (EOF != scanf("%d %d", &n, &m)) {			//n项求m次倒数;

		ploy = (xterm *)malloc(n * sizeof(xterm));

		for (i = 0; i < n; i++) {
			scanf("%d %d", &((*(ploy + i)).a), &((*(ploy + i)).b));
		}
		i = 0;
		while (0 == (*(ploy + i)).a) i++;

		first = 1;
		while (i < n) {
			if (1 == first) {		//是第一项
				print1((*(ploy + i)).a, (*(ploy + i)).b, m);
				if ((*(ploy + i)).b  >= m)
					first = 0;
			} else {				//不是第一项
				print2((*(ploy + i)).a, (*(ploy + i)).b, m);
			}
			++i;
		}
		printf("\n");
	}
	//system("pause");
	return 0;
}