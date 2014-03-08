#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int n = 1,flag = 1;
	float pi = 0,temp;
	

	while(1)
	{
		temp = (1.0/n) * flag;
		if(fabs(temp) < 0.00001) break;
		pi += temp;
		flag = -flag;
		n += 2;
	}

	pi *= 4;
	printf("My Pi is %f\n",pi);
	system("pause");
}