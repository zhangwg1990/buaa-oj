#include<stdio.h>

void swap(int *a, int *b) {
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int x1, y1, x2, y2, x3, y3, x4, y4;
    while (EOF != scanf("%d %d %d %d", &x1, &y1, &x2, &y2)) {
        scanf("%d %d %d %d", &x3, &y3, &x4, &y4);
        if (x1 > x2) {
            swap(&x1, &x2);
        }
        if (x3 > x4) {
            swap(&x3, &x4);
        }
        if (y1 > y2) {
            swap(&y1, &y2);
        }
        if (y3 > y4) {
            swap(&y3, &y4);
        }
        if (x3 > x2 || x1 > x4) {
            printf("NO\n");
        } else if (y3 > y2 || y1 > y4) {
            printf("NO\n");
        } else {
            printf("YES\n");
        }
    }
    return 0;
}
