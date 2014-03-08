#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, t;
	int h_x, h_y, n, f_x, f_y, maxR2, maxi, temp;

	scanf("%d", &t);
	while (t--) {
		scanf("%d %d", &h_x, &h_y);
		scanf("%d", &n);

		maxR2 = 0;
		maxi = 0;

		for (i = 0; i < n; i++) {
			scanf("%d %d", &f_x, &f_y);
			temp = (f_x - h_x) * (f_x - h_x) + (f_y - h_y) * (f_y - h_y);
			if (maxR2 < temp) {
				maxR2 = temp;
				maxi = i;
			}
		}

		printf("%d\n", maxi + 1);
	}
	system("pause");
	return 0;
}