/*����10��ѧ�������������ͳɼ�������Ϣ���ҳ��ɼ���ߵģ�Ȼ�������ѧ���������ͳɼ�*/
#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
	char name[50];
	float score;
}student;

int main()
{
	int i, max = 0;
	student a[10];
	 
	for (i = 0; i < 10; i++)
	{
		scanf("%s %f",a[i].name,&a[i].score);
		if (a[i].score > a[max].score) max = i;
	}
	printf("The max score is %f, and his name is %s\n",a[max].score,a[max].name);

	system("pause");
	return 0;
}