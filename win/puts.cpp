#include<stdio.h>
#include<stdlib.h>
int main()
{
		char a[40];
		int n,i;

		puts("Please input the string");
		gets(a);

		puts("Please input the number");
		scanf("%d",&n);

		for(i = 0; a[i+n] != '\0';i++)
		{
			a[i] = a[i+n];
		}
		a[i] = '\0';

		puts(a);

		system("pause");
		return 0;
}