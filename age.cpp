/*��Ŀ����5��������һ��
�ʵ�����˶����ꣿ��˵�ȵ�4���˴�2�ꡣ
�ʵ�4������������˵�ȵ�3���˴�2�ꡣ
�ʵ������ˣ���˵�ȵ�2�˴����ꡣ
�ʵ�2���ˣ�˵�ȵ�һ���˴����ꡣ
��� �ʵ�һ���ˣ���˵��10�ꡣ
���ʵ�����˶��*/
#include<stdio.h>
#include<stdlib.h>
int age(int n)
{
	if (1 == n) return 10;
	return (age(n - 1) + 2);
}

int main()
{
	printf("The 5th man is %d years old\n",age(5));
	system("pause");
	return 0;
}