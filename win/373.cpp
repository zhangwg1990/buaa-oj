#include<stdio.h>
#include<string.h>

int isabc(char c) {
	if (c >= 'a' && c <= 'z')
		return 1;
	else if (c >= 'A' && c <= 'Z')
		return 2;
	else 
		return 0;
}
void comp(char a[], int b[], int p, int q) {
	int i;
	for (i = p; i <= q; i++) {
		b[i] = a[q + p - i] - a[i];
	}
}
void search(int b[], int no[], int p, int q, int *max_l, int *max_r, int *max_len) {
	int temp_l, temp_r, temp_len;

	if (0 == (p + q) % 2) {
		temp_len = 1;
		temp_l = (p + q) / 2 - 1;
		temp_r = (p + q) / 2 + 1;
	} else {
		temp_len = 0;
		temp_l = (p + q - 1) / 2;
		temp_r = (p + q + 1) / 2;
	}
	while (0 == b[temp_l] && 0 == b[temp_r]) {
		temp_len += 2;
		if (temp_len > *max_len && no[temp_r] - no[temp_l] <= 2000) {
			*max_len = temp_len;
			*max_l = temp_l--;
			*max_r = temp_r++;
		} else if (no[temp_r] - no[temp_l] > 2000) {
			break;
		} else {
			temp_l--;
			temp_r++;
		}
	}
}
int main() {
	char s[20000], c;
	char a[20000];
	int b[20000];
	int no[20000];
	int i, j, flag;
	int len;
	int max_l, max_r, p, q, max_len;
	int temp_l, temp_r, temp_len;

	freopen("data.txt", "r", stdin);
	freopen("out.txt", "w", stdout);

	i = j = 0;
	while (EOF != (c = getchar())) {
		s[i] = c;
		if (1 == isabc(c)) {
			a[j] = c;
			no[j] = i;
			j++;
		} else if (2 == isabc(c)) {
			a[j] = c + 'a' - 'A';
			no[j] = i;
			j++;
		} else {
			;
		}
		i++;
	}
	s[i] = '\0';
	a[j] = '\0';

	len = strlen(a);
	
	max_l = max_r = 0;
	max_len = 0;
	if (len <= 2000) {
		p = 0;
		for (q = 0; q < len; q++) {
			comp(a, b, p, q);
			search(b, no, p, q, &max_l, &max_r, &max_len);
		}
		while (p != q) {
			comp(a, b, p, q);
			search(b, no, p, q, &max_l, &max_r, &max_len);
			p++;
		}
	} else {
		p = 0;
		for (q = 0; q < 2000; q++) {
			comp(a, b, p, q);
			search(b, no, p, q, &max_l, &max_r, &max_len);
		}
		while (q != len - 1) {
			comp(a, b, p, q);
			search(b, no, p, q, &max_l, &max_r, &max_len);
			if (0 == (p + q) / 2)
				p++;
			else 
				q++;
		}
		while (p != q) {
			comp(a, b, p, q);
			search(b, no, p, q, &max_l, &max_r, &max_len);
			p++;
		}
	}
	printf("%d\n", max_r - max_l + 1);
	for (i = no[max_l]; i <= no[max_r]; i++)
		printf("%c", s[i]);
	printf("\n");
	return 0;
}