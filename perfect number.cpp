/*��Ŀ��һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ����������
����6=1��2��3.����ҳ�1000���ڵ�����������*/
#include<stdio.h>
#include<stdlib.h>

int isperfect(int number)
{
	int i, sum = 0;
	for (i = 1;i < number;i++)
		if (0 == (number % i)) sum += i;
	if ( sum == number) return 1;
	return 0;
}

int main()
{
	int i;

	for ( i = 1;i <= 1000;i++)
		if (1 == isperfect(i)) printf("%d\t",i);
	printf("\n");
	system("pause");
	return 0;
}