/*��Ŀ�����������������Ƕ������ɴ��⣺
ѧϰ�ɼ�>=90�ֵ�ͬѧ��A��ʾ��
60-89��֮�����B��ʾ��
60�����µ���C��ʾ��*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	float score;
	puts("Please input your score");
	scanf("%f",&score);

	(score >= 90)?(printf("You got a A\n")):      //������̫���ˣ����ԶϿ���
		((score < 60)?(printf("I am very sorry, you failed the exam\n")):(printf("You got a B\n")));
	system("pause");
	return 0;
}