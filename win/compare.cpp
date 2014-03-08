#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x, y, z,temp;

	printf("Please input x, y, z\n");
	scanf("%d %d %d",&x,&y,&z);

	if(x > y)
	{
		temp = x;
		x = y;
		y = temp;
	}
	if(x > z)
	{
		temp = x;
		x = z;
		z = temp;
	}
	if(y > z)
	{
		temp = y;
		y = z;
		z = temp;
	}

	printf("The right order is %d %d %d\n",x,y,z);
	system("pause");

}