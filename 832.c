#include<stdio.h>

int main() {
    int dt;
    int m, n;
    int s, t;
    int a[100000];
    int i;
    int sum;

    scanf("%d", &dt);
    while (dt--) {
        scanf("%d %d", &n, &m);
        a[0] = 0;
        for (i = 1; i <= n; i++) {
            scanf("%d", a + i);
            a[i] += a[i - 1];
        }
        while (m--) {
            scanf("%d %d", &s, &t);
            if (t >= s) {
                printf("%d\n", a[t] - a[s - 1]);
            } else {
                printf("%d\n", a[n] - a[s - 1] + a[t]);
            }
        }
    }

    return 0;
}
