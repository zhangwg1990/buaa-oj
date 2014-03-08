#include<stdio.h>
#include<stdlib.h>
int isprime(int n) {
	int i;
	if (0 == n)
		return 0;
	else if (1 == n)
		return 0;
	else if (2 == n)
		return 1;
	else for (i = 2; i < n; i++) {
		if (0 == n % i)
			return 0;
	}
	return 1;
}
int main() {
	int i, maxn, minn;
	char s[100];
	int w[26];
	while (EOF != scanf("%s", s)) {
		for (i = 0; i < 26; i++)
			w[i] = 0;
		i = 0;
		while ('\0' != s[i]) {
			w[s[i] - 'a']++;
			i++;
		}
		maxn = -1;
		minn = 100;
		for (i = 0; i < 26; i++) {
			if (w[i] > maxn)
				maxn = w[i];
			if (w[i] < minn && w[i] != 0)
				minn = w[i];
		}
		if (1 == isprime(maxn - minn))
			printf("Lucky Word\n%d\n", maxn - minn);
		else 
			printf("No Answer\n%d\n", 0);
	}
	return 0;
}