#include<stdio.h>
#include<stdlib.h>
/*int fn(int n)
{
	if (1 == n)
		return 1;
	else 
		return ((fn(n - 1) * fn(n - 1) + 1) % 100);
}*/
int main()
{
	int n, temp;
	while (EOF != scanf("%d", &n)) {
		temp = n % 6;
		switch (temp) {
		case 1 : case 2 : case 3 :
			printf("%d\n", 0);
			break;
		case 4 :
			printf("%d\n", 2);
			break;
		case 5:
			printf("%d\n", 7);
			break;
		case 0:
			printf("%d\n", 3);
			break;
		}
	}
	system("pause");
	return 0;
}