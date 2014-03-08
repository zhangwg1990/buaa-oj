#include<stdio.h>
#include<stdlib.h>

int comp(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int main() {
    int n;
    int a[1000];
    int i, j;
    while (EOF != scanf("%d", &n)) {
        for (i = 0; i < n; i++) {
            scanf("%d", a + i);
        }
        qsort(a, n, sizeof(int), comp);
        for (i =0, j = 0; i < n; i++) {
            while (a[j] == a[i]) {
                j++;
            }
            printf("%d %d\n", a[i], j - i);
            i = j - 1;
        }
    }
}
