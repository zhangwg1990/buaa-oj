#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k,n;  // man=i, woman=j, children=k
	n=0;

	for(i=0;i<=50;i++)
		for(j=0;j<=50;j++)
			for(k=0;k<=50;k++)
			{
				if(i*3+j*2+k==50)
				{
					n+=1;
					printf("#%3d man=%3d woman=%3d children=%3d\n",n,i,j,k);
				}
			}

	system("pause");
}