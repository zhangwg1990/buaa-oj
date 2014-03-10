#include <stdio.h>
#include <stdlib.h>

typedef struct star_t{
    int x;
    int y;
    int z;
}star_t;

int comp(const void *a, const void *b) {
    return ((star_t *)a)->x - ((star_t *)b)->x;
}

int main() {
    int m, n;
    int i, j;
    int flag;
    star_t s[50000];
    star_t *p, tmp;
    while (EOF != scanf("%d", &n)) {
        for (i = 0; i < n; i++) {
            scanf("%d %d %d", &(s[i].x), &(s[i].y), &(s[i].z));
        }
        qsort(s, n, sizeof(s[0]), comp);
        scanf("%d", &m);
        for (i = 0; i < m; i++) {
            scanf("%d %d %d", &(tmp.x), &(tmp.y), &(tmp.z));
            p = bsearch(&(tmp.x), s, n, sizeof(s[0]), comp);
            flag = 0;
            if (NULL != p) {
                j = 0;
                while((p + j)->x == tmp.x && 0 == flag) {
                    if ((p + j)->y == tmp.y && (p + j)->z == tmp.z) {
                        flag = 1;
                        break;
                    }
                    j++;
                }
                j = 1;
                while((p - j)->x == tmp.x && 0 == flag) {
                    if ((p - j)->y == tmp.y && (p - j)->z == tmp.z) {
                        flag = 1;
                        break;
                    }
                    j++;
                }
            }
            if (0 == flag) {
                printf("NO\n");
            } else {
                printf("YES\n");
            }
        }
    }
}
