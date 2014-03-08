#include<stdio.h>

typedef struct pos_t{
    int x;
    int y;
}pos_t;

int main() {
    pos_t p[8];
    int i;
    int flag;
    while (EOF != scanf("%d %d %d %d", &(p[0].x), &(p[0].y), &(p[2].x),&(p[2].y))) {
        scanf("%d %d %d %d", &(p[4].x), &(p[4].y), &(p[6].x),&(p[6].y));
        p[1].x = p[2].x;
        p[1].y = p[0].y;
        p[3].x = p[0].x;
        p[3].y = p[2].y;
        p[5].x = p[6].x;
        p[5].y = p[4].y;
        p[7].x = p[4].x;
        p[7].y = p[6].y;
        /*for (i = 0; i < 8; i++) {
            printf("x%d = %d  y%d = %d\n", i + 1, p[i].x, i + 1, p[i].y);
        }*/
        for (i = 0; i < 4; i++) {
            if (p[i].x >= p[5].x && p[i].x <= p[7].x && p[i].y >= p[5].y && p[i].y <= p[7].y) {
                flag = 1;
                break;
            }
        }
        if (1 == flag) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
