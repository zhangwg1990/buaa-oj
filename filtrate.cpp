/*�Ӽ�������������һ���ַ���S��������е������ַ���
��������Ϊ��sd12we$*55abc8����������Ϊ��12558*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	char c;
	while (EOF != (c = getchar()))
	{
		if ((c >= '0') && (c <= '9'))
			putchar(c);
	}
	system("pause");
	return 0;
}