#include<stdio.h>
int isabc(char c) {
	if (c >= 'a' && c <= 'z')
		return 1;
	else if (c >= 'A' && c <= 'Z')
		return 1;
	else 
		return 0;
}
int equal(char a, char b) {
	if (a == b || a + 'A' - 'a' == b || b + 'A' - 'a' == a)
		return 1;
	else 
		return 0;
}
int main() {
	char s[20000], c;
	int p, q;
	int i = 0;
	int maxl, maxr, len, len_max = 0;
	maxl = maxr = 0;

	freopen("data.txt", "r", stdin);
	freopen("out.txt", "w", stdout);

	while(EOF != (c = getchar())) {
		s[i] = c;
		i++;
	}
	s[i] = '\0';

	for (i = 0; '\0' != s[i]; i++) {
		//if (0 == isabc(s[i])) continue;
		len = -1;
		p = i;
		q = i;
		while (p >= 0 && '\0' != s[q]) {

			while (0 == isabc(s[p]) && p > 0) p--;
			while (0 == isabc(s[q]) && '\0' != s[q + 1]) q++;

			if (0 == isabc(s[p]) || 0 == isabc(s[q])) break;

			if (equal(s[p], s[q])) {
				len += 2;
				if (len > len_max && q - p  < 2000) {
					len_max = len;
					maxl = p;
					maxr = q;
					p--;
					q++;
				} else if (q - p >= 2000){
					break;
				} else {
					p--;
					q++;
				}
			} else {
				break;
			}
		}
	}
	/*len = 0;
	for (i = maxl; i <= maxr; i++) {
		if (isabc(s[i]))
			len++;
	}*/
	printf("%d\n", len_max);
	for (i = maxl; i <= maxr; i++) {
		printf("%c", s[i]);
	}
	//for (i = 0; i <= 20000; i++)
	//	printf("a");
	//printf("\n");
	//printf("%s", s);
	return 0;
}