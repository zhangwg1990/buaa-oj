#include<stdlib.h>
#include<stdio.h>

char lastchar(char str[])
{
	
	int i = 0;
	
	if(str[0] == '\0') return '\0';

	while(str[i] != '\0') ++i;

	return str[i-1];
}

int main()
{
	char a[100];
	
	puts("Please input the string");
	gets(a);

	printf("lastchar is %c\n",lastchar(a));
	system("pause");
}