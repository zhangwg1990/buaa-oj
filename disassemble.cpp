/*��Ŀ����һ��������5λ����������Ҫ��һ�������Ǽ�λ�������������ӡ����λ���֡�*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int number;
	int n = 0;

	puts("Please input the number");
	scanf("%d",&number);

	while(0 != number)
	{
		n++;
		printf("%c",'0'+(number % 10));
		number /= 10;
	}
	printf("\n%d\n",n);
	system("pause");
	return 0;
}