#include<stdio.h>
#include<string.h>
int index(char s1[], char s2[], int pos) {
	int i, j;
	int len_s1, len_s2;
	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	i = pos;
	j = 0;
	while (i < len_s1 && j < len_s2) {
		if (s1[i] == s2[j]) {
			i++;
			j++;
		} else {
			i = i - j + 1;
			j = 0;
		}
	}
	if (len_s2 == j) 
		return i - len_s2;
	else                      
		return -1;
}
int main() {
	char c;
	char s1[1000], s2[1000];
	int i, j, len_s1, len_s2;
	while (EOF != scanf("%c\n", &c)) {
		switch (c) {
		case 'A' :
			scanf("%s %s", s1, s2);
			len_s1 = strlen(s1);
			for (i = len_s1; '\0' != s2[i - len_s1]; i++) {
				s1[i] = s2[i - len_s1];
			}
			s1[i] = '\0';
			printf("%s\n", s1);
		case 'B' :
			scanf("%s %s", s1, s2);
			len_s1 = strlen(s1);
			len_s2 = strlen(s2);
			
		}
	}
	return 0;
}