/*��Ŀ�����õݹ麯�����÷�ʽ�����������5���ַ������෴˳���ӡ������*/
#include<stdio.h>
#include<stdlib.h>

void reverse(int n)
{
	char c;
	if (n <= 1)
	{
		c = getchar();
		putchar(c);
	}
	else
	{
		c = getchar();
		reverse(n - 1);
		putchar(c);
	}
}

int main()
{
	int i = 5;
	
	reverse(i);
	printf("\n");

	system("pause");
	return 0;
}