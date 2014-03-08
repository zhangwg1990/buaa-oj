#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, i;
	int k, a, b;
	int hight, apple, count1, count2;


	scanf("%d", &n);

	while (n > 0){
		n--;
		count1 = count2 = 0;
		scanf("%d %d %d",&k, &a, &b);
		hight = a + b;

		for (i = 0; i < k; i++){
			scanf("%d",&apple);
			if (apple <= a){
				count1++;
				count2++;
			}
			else if(apple <= hight)
				count2++;
		}
		printf("%d %d\n",count2, count2 - count1);
	}
	system("pause");
	return 0;
}