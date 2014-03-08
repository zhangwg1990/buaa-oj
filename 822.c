#include<stdio.h>
#include<stdlib.h>

typedef struct sec_t{
    int l;
    int r;
}sec_t;

int comp(const void *a, const void *b) {
    return ((sec_t *)a)->r - ((sec_t *)b)->r;
}

int main() {
    int n;
    int i, j;
    int flag, tmp;
    sec_t a[1000];
    while (EOF != scanf("%d", &n)) {
        for (i = 0; i < n; i++) {
            scanf("%d %d", &a[i].l, &a[i].r);
        }
        qsort(a, n, sizeof(a[0]), comp);
        for (i = n - 1; i > 0; i--) {
            flag = 0;
            for (j = 1; j <= i; j++) {
                if (a[j - 1].l > a[j].l) {
                    tmp = a[j].l;
                    a[j].l = a[j - 1].l;
                    a[j - 1].l = tmp;
                    tmp = a[j].r;
                    a[j].r = a[j - 1].r;
                    a[j - 1].r = tmp;
                    flag = 1;
                }
            }
            if (0 == flag)
                break;
        }
        for (i = 0; i < n; i++) {
            printf("%d %d\n", a[i].l, a[i].r);
        }
    }
    return 0;
}
