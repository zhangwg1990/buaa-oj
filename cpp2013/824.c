#include<stdio.h>

void init(int a[]) {
    int i = 0;
    for (i = 0; i < 1000; i++)
        a[i] = i;
}

int main() {
    int n, m, k;
    int i, j, tmp;
    char ch;
    int a[1000][1000];
    int r[1000], c[1000];

    while (EOF != scanf("%d %d %d", &n, &m, &k)) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                scanf("%d", &a[i][j]);
            }
        }
        init(r);
        init(c);
        while (k > 0) {
            getchar();
            scanf("%c %d %d", &ch, &i, &j);
            i--;
            j--;
            if ('C' == ch) {
                tmp = c[i];
                c[i] = c[j];
                c[j] = tmp;
            } else {
                tmp = r[i];
                r[i] = r[j];
                r[j] = tmp;
            }
            k--;
        }
        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                printf("%d ", a[r[i]][c[j]]);
            }
            printf("\n");
        }
    }
    return 0;
}
