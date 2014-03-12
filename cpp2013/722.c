#include <stdio.h>
#include <math.h>

int main() {
    int x, y;
    int n;
    int valy, mont;
    int i;
    double high, low, r_tmp, h_tmp;
    int a[100], b[100], r[100], h[100];
    char c[100];
    while (EOF != scanf("%d %d", &x, &y)) {
        scanf("%d", &n);
        for (i = 0; i < n; i++) {
            scanf("%d %d %d %d %c", a + i, b + i, r + i, h + i, c + i);
        }
        valy = mont = 0;
        high = low = 0;
        for (i = 0; i < n; i++) {
            if ('M' == c[i] && 0 == valy) {
                r_tmp = (a[i] - x) * (a[i] - x) + (b[i] - y) * (b[i] - y);
                r_tmp = sqrt(r_tmp);
                if (r_tmp < r[i]) {
                    mont = 1;
                    h_tmp = h[i] * (r[i] - r_tmp) / r[i];
                    if (h_tmp > high)
                        high = h_tmp;
                }
            } else {
                r_tmp = (a[i] - x) * (a[i] - x) + (b[i] - y) * (b[i] - y);
                r_tmp = sqrt(r_tmp);
                if (r_tmp < r[i]) {
                    valy = 1;
                    h_tmp = h[i] * (r[i] - r_tmp) / r[i];
                    if (h_tmp > low)
                        low = h_tmp;
                }
            }
        }
        if (1 == valy) {
            printf("%.2lf\n", low * -1);
        } else if (1 == mont) { 
            printf("%.2lf\n", high);
        } else {
            printf("0.00\n");
        }
    }

    return 0;
}
