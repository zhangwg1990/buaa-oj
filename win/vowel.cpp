/*��дһ�����������ַ����е�Ԫ����ĸ����������ַ���Ϊ��boy and girl��, �����Ϊ�� oai*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	char c;
	while ((c = getchar()) != EOF)
	{
		if ( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
			putchar(c);
	}
	system("pause");
	return 0;
}