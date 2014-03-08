/*输入10个学生（包括姓名和成绩）的信息，找出成绩最高的，然后输出该学生的姓名和成绩*/
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