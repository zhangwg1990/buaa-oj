/*��Ŀ���ŵ����⣺��һ�����ӣ��ӳ������3������ÿ���¶���һ�����ӣ�С���ӳ���
�������º�ÿ��������һ�����ӣ��������Ӷ���������ÿ���µ���������Ϊ���٣�*/

#include<stdio.h>
#include<stdlib.h>

int fibonacci(int month)
{
	if(month <= 2)return 1;
	return (fibonacci(month - 1) + fibonacci(month - 2));
}

int main()
{
	int month;
	printf("Please input the month\n");
	scanf("%d",&month);
	printf("Now, we have %d rabbits\n",fibonacci(month));
	system("pause");
	return 0;
}