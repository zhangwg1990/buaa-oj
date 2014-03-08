/*题目：有5个人坐在一起，
问第五个人多少岁？他说比第4个人大2岁。
问第4个人岁数，他说比第3个人大2岁。
问第三个人，又说比第2人大两岁。
问第2个人，说比第一个人大两岁。
最后 问第一个人，他说是10岁。
请问第五个人多大？*/
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