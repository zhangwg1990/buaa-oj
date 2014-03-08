#include<stdio.h>
int main() {
	int t;
	int n;
	double pi[100];
	int i, sig;
	freopen("out.txt", "w", stdout);
	scanf("%d", &t);
	
	pi[0] = 1;
	sig = -1;
	for (i = 1; i < 100; i++) {
		pi[i] = pi[i - 1] + sig * 1 / (double)(2 * i + 1);
		sig *= -1;
		pi[i - 1] *= 4;
	}
	pi[i - 1] *= 4;

	while (t--) {
		scanf("%d", &n);
		printf("%.10lf\n", pi[n - 1]);
	}
	/*for (i = 0; i < 100; i++) {
		printf("#%d : %.10lf\n", i, pi[i]);
	}*/
	return 0;
}