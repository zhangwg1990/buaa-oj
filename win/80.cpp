#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, i, j;
	int rab[100];
	int temp;
	while (EOF != scanf("%d", &n)) {		
		for (i = 0; i < n; i++)
			scanf("%d", rab + i);
		for (i = 0; i < 3; i++) {
			temp = 0;
			for (j = 0; j < n; j++) {
				if (rab[temp] < rab[j])
					temp = j;
			}
			if (i != 2) printf("%d ", temp + 1);
			rab[temp] = 0;
		}
		printf("%d\n", temp + 1);
	}
	system("pause");
	return 0;
}