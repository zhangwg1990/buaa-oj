#include<stdio.h>
#include<stdlib.h>
#define X 1
#define Y 2
#define Z 3
int main()
{
	int a,b,c;

	for(a = 1; a <= 3; a++)
	{
		for(b = 1; b <= 3; b++)
		{
			for(c = 1; c <= 3; c++)
			{
				if( (a != X)&&(c != X)&&(c != Z))
				{
					if(a==b || a==c || b==c) continue;
					printf("A vs %c\n",'X'+a-1);
					printf("B vs %c\n",'X'+b-1);
					printf("C vs %c\n",'X'+c-1);
					printf("\n");
				}
			}
		}
	}

	system("pause");


}