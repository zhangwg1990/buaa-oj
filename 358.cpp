#include<stdio.h>
#include<stdlib.h>
int part(int a[], int low, int high) {
	int key;
	key = a[low];
	while (low < high) {
		while (low < high && a[high] >= key) --high;
		a[low] = a[high];
		while (low < high && a[low] <= key) ++low;
		a[high] = a[low];
	}
	a[low] = key;
	return low;
}
void my_qsort(int a[], int low, int high)
{
	int middle;
	if (low < high) {
		middle = part(a, low, high);
		my_qsort(a, low, middle - 1);
		my_qsort(a, middle + 1, high);
	}
}
int main()
{
	int i, n, a[1000];
	while (EOF != scanf("%d", &n)) {
		for (i = 0; i< n; i++) {
			scanf("%d", a + i);
		}
		my_qsort(a, 0, n - 1);
		for (i = 0; i < n - 1; i++) {
			printf("%d ", a[i]);
		}
		printf("%d\n", a[i]);
	}
	system("pause");
	return 0;
}