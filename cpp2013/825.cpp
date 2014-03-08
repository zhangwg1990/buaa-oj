#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j;
	char a[1024];
	char b[1024];
	int n;
	scanf("%d\n", &n);

	while (n > 0){
		n--;
		gets(a);
		i = 0;
		j = 0;
		while ('\0' != a[i]){
			if ('e' != a[i]) b[j] = a[i];
			else if (('s' == a[i + 1]) && ('o' == a[i + 2]) && ('l' == a[i + 3]) && ('c' == a[i + 4])){
				i += 5;
				b[j] = a[i];
			} else b[j] = a[i];
			i++;
			j++;
		}
		b[j] = '\0';
		i = 0;
		j = 0;
		while ('\0' != b[j]){
			if ('a' != b[j]) a[i] = b[j];
			else if (('b' == b[j + 1]) && ('c' == b[j + 2])){
				a[i] = 'd';
				a[i + 1] = 'n';
				a[i + 2] = 'a';
				a[i + 3] = 'l';
				a[i + 4] = 's';
				a[i + 5] = 'i';
				i += 5;
				j += 2;
			} else a[i] = b[j];
			i++;
			j++;
		}
		a[i] = '\0';
		printf("%s\n", a);
	}
	system("pause");
	return 0;
}