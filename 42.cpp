#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j, k;
	int tempi, tempj;
	while (EOF != scanf("%d", &k)) {
		for (i = 0; i < k; i++) {
			for (j = 0; j < k; j++) {
				//printf("i = %d, j = %d\n", i, j);
				if (i >= k / 2)
					tempi = k - 1 - i;
				else tempi = i;
				if (j >= k / 2)
					tempj = k - 1 - j;
				else tempj = j;
				//printf("tempi = %d, tempj = %d\n",tempi, tempj);
				if (tempj <= tempi) {
					if (0 == tempj % 2)
						printf("*");
					else 
						printf("#");
				} else {
					if (0 == tempi % 2)
						printf("*");
					else 
						printf("#");
				}
			}		
				printf("\n");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}