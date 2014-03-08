#include<stdio.h>
int part(int a[], int low, int high) {
	int key;
	key = a[low];
	while (low < high) {
		while (a[high] >= key && low < high) high--;
		a[low] = a[high];
		while (a[low] <= key && low < high) low++;
		a[high] = a[low];
	}
	a[low] = key;
	return low;
}
void my_qsort(int a[], int low, int high) {
	int mid;
	if (low < high) {
		mid = part(a, low, high);
		my_qsort(a, low, mid - 1);
		my_qsort(a, mid + 1, high);
	}
}
int my_hs(int a[], int n, int value) {
	int mid, low, high;
	mid = (n - 1) / 2;
	low = 0;
	high = n - 1;
	while (low <= high) {
		if (value == a[mid]) {
			return mid + 1;
		} else if (value > a[mid]) {
			low = mid + 1;
			mid = (low + high) / 2;
		}else if (value < a[mid]) {
			high = mid - 1;
			mid = (low + high) / 2;
		}
	}
	return 0;
}
int main() {
	int n, m, i, temp;
	int a[1000];
	while (EOF != scanf("%d", &n)) {
		for (i = 0; i < n; i++) {
			scanf("%d", a + i);
		}
		my_qsort(a, 0, n - 1);
		scanf("%d", &m);
		for (i = 0; i < m - 1; i++) {
			scanf("%d", &temp);
			printf("%d ", my_hs(a, n, temp));
		}
		scanf("%d", &temp);
		printf("%d\n", my_hs(a, n, temp));
	}
	return 0;
}