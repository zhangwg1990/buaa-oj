/*题目：利用条件运算符的嵌套来完成此题：
学习成绩>=90分的同学用A表示，
60-89分之间的用B表示，
60分以下的用C表示。*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	float score;
	puts("Please input your score");
	scanf("%f",&score);

	(score >= 90)?(printf("You got a A\n")):      //是在是太长了，所以断开；
		((score < 60)?(printf("I am very sorry, you failed the exam\n")):(printf("You got a B\n")));
	system("pause");
	return 0;
}