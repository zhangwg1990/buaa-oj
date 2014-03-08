/*编写一个函数，将两个字符串连接起来。（不能用strcat函数）*/
#include<stdio.h>
#include<stdlib.h>
#define Maxsize 100
int main()
{
	char a[Maxsize], b[Maxsize], temp;
	int i = 0, j = 0;

	puts("Please input the string a");
	scanf("%s",a);
	puts("Please input the string b");
	scanf("%s",b);

	while ('\0' != a[i]) i++;
	while ('\0' != b[j]){
		a[i] = b[j];
		i++;
		j++;
	}
	a[i] = '\0';
	printf("%s\n",a);

	system("pause");
	return 0;
}