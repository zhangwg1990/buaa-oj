/*1.������������
ĳЩ�����ֽܷ�����ɸ����������ĺ͵���ʽ������
    15 = 1 + 2��3��4��5��
    15 = 4 + 5 + 6
    15 = 7 + 8
ĳЩ�������ֽܷ�Ϊ���������ĺͣ����磺16
���룺һ������N��N <= 10000��
���������N��Ӧ�����зֽ���ϣ�����ÿ���ֽ��е���С������С���������ÿ���ֽ�ռһ�У�
ÿ������֮����һ���ո�ÿ�������һ���ո񣩣����û���κηֽ���ϣ������NONE��*/

#include<stdio.h>
#include<stdlib.h>

int sum(int a, int b);

int func1(int a,int b)        //�˺��������жϴ�a��ʼ��û������������ӵ�b������У���������������������û�У�����0��
{
	int i = 2;

	while (1){
		if (b == sum(a, i)) return i;
		if (sum(a, i) > b) return 0;
		i++;
	}
}

int sum(int a, int n)        //�˺����������a��ʼ������n��ͣ�
{
	return (((2 * a + n - 1) * n) / 2);
}

int main()
{
	int i, j, n, number, flag = 0;

	puts("Please input the number");
	scanf("%d",&number);

	for (i = 1; i <= (number / 2); i++){
		if (0 != func1(i, number)){
			printf("%d = %d ",number,i);
			for (j = 1;j < func1(i, number); j++)
				printf("+ %d ",i + j);
			puts("");
			flag = 1;
		}
	}
	if (0 == flag) printf("NONE\n");


	system("pause");
	return 0;
}