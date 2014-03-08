#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a;
	int i;
	while (EOF != scanf("%d",&a)){
		i = 1;
		while (i <= a){
			if (a & i) printf("%d ",i);
			i <<= 1;
		}
		printf("\n");
	}
		system("pause");
	return 0;
}