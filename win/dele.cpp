/*����void dele(char *s)�Ĺ�����ɾ���ַ���s
�е����������ַ��ͷ���ĸ�ַ��������ַ���ѹ����
����ԭ�ַ���Ϊ��abc12ef5ghij8#%%yz��
�������ַ���Ϊ��abcefghijyz*/
#include<stdio.h>
#include<stdlib.h>
#define N 1000

int ischar(char c)
{
	if ((c >= 'a')&&(c <= 'z')) return 1;
	if ((c >= 'A')&&(c <= 'Z')) return 1;
	return 0;
}

void dele(char *s)
{
	char *p, *q;
	p = s;
	while (1 == ischar(*p)) p++;
	q = p;
	while (0 == ischar(*q)) q++;
	while ('\0' != *q){
		if (1 == ischar(*q)){
			*p = *q;
			p++;
			q++;
		}
		if (0 == ischar(*q)) q++;
	}
	*p = '\0';
}

int main()
{
	char a[N];

	puts("Please input the string");
	scanf("%s",a);

	dele(a);

	printf("%s\n",a);
	system("pause");
	return 0;
}