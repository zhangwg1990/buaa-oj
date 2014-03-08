/*��дһ����: int substring(char *str, char *sub), 
�ж��ַ���sub�Ƿ����ַ���str���Ӵ��������Ӵ����򷵻��Ӵ���λ�ã����򷵻� -1*/
#include<stdio.h>
#include<stdlib.h>
#define N 100
int substring(char *str, char *sub)      //��������Ѷ���
{
	int n = 0, i, position = 1;          //n������ʾ�ִ����ȣ�position����ָʾ�ִ�λ�ã�
	char *p, *q, *r;       //pָ���ִ���һ���ַ���q,r�ֱ���ԭ�ַ�����ָ�����ִ�������ȵĴ���ͷβ��
	p = sub;
	q = str;
	while ('\0' != *p){        //�õ��ִ�����
		p++;
		n++;
	}
	p = sub;
	r = str + n - 1;

	while (1)
	{
		while (*p != *q){
			position++;
			q++;
			r++;
			if (*r == '\0') return -1;
		}
		for (i = 1; i <= n - 1 ;i++)
			if (*(p + i) != *(q + i))break;
		if (i == n) return position;
		q++;
		r++;
		position++;
	}
}


int main()
{
	char a[N], b[N];
	int result;
	
	puts("Please input the main string");
	scanf("%s",a);
	puts("Please input the sub string");
	scanf("%s",b);

	result = substring(a, b);
	if (-1 == result) puts("This sub string does not match the main string");
	else printf("The sub string is at the %d char of the main string\n",result);

	system("pause");
	return 0;
}