#include <stdio.h>

int main() {
    int t, n;
    int i, j;
    int dis;
    int a[1000];
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        for (i = 0; i < n; i++) {
            scanf("%d", a + i);
        }
        dis = 0;
        for (i = 0; i < n - 1; i++) {
            if (a[i] > 0) {
                j = i + 1;
                while (a[i] > 0) {
                    while (a[j] >= 0) j++;
                    if (a[i] + a[j] > 0) {
                        dis += (j - i) * a[j] * -1;
                        a[i] += a[j];
                        a[j] = 0;
                    } else {
                        dis += (j - i) * a[i];
                        a[j] += a[i];
                        a[i] = 0;
                    }
                }
            } else if (a[i] < 0) {
                j = i + 1;
                while (a[i] < 0) {
                    while (a[j] <= 0) j++;
                    if (a[i] + a[j] < 0) {
                        dis += (j - i) * a[j];
                        a[i] += a[j];
                        a[j] = 0;
                    } else {
                        dis += (j - i) * a[i] * -1;
                        a[j] += a[i];
                        a[i] = 0;
                    }
                }
            } else {
                ;
            }
        }
        printf("%d\n", dis);
    }
    return 0;
}
