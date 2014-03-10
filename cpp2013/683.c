#include <stdio.h>
#include <math.h>

int main() {
    int n, m;
    int c_x, c_y, r, h, x, y;
    double dis, h2;
    
    scanf("%d", &n);
    while (n--) {
        scanf("%d %d %d %d",&c_x, &c_y, &r, &h);
        scanf("%d", &m);
        while (m--) {
            scanf("%d %d", &x, &y);
            dis = sqrt((double)((x - c_x) * (x - c_x) + (y - c_y) * (y - c_y)));
            if (dis >= r) {
                printf("0.00\n");
            } else {
                h2 = h * (r - dis) / r;
                printf("%.2lf\n", h2);
            }
        }
    }

    return 0;
}
