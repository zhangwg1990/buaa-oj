#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b) {
    return *(int *)b - *(int *)a;
}

int main() {
    int n, s;
    int i, j;
    int num, flag;
    int a[1000];
    while (EOF != scanf("%d %d", &n, &s)) {
        for (i = 0; i < n; i++) {
            scanf("%d", a + i);
        }
        qsort(a, n, sizeof(int), comp);
        num = 0;
        for (i = 0; a[i] + a[i + 1] > s; i++) {
            flag = 1;
            for (j = i + 1; j < n && 1 == flag; j++) {
                if (a[i] + a[j] > s)
                    num++;
                else
                    flag = 0;
            }
        }
        printf("%d\n", num);
    }
    return 0;
}
