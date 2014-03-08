#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct stu_t{
    char no[15];
    int metal[4];
}stu_t;

int comp(const void *a, const void *b) {
    return strcmp(((stu_t *)a)->no, ((stu_t *)b)->no);
}

void init_stu(stu_t st[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        st[i].metal[0] = 0;
        st[i].metal[1] = 0;
        st[i].metal[2] = 0;
        st[i].metal[3] = 0; 
    }
}
int metoi(char metal[]) {
    if (0 == strcmp(metal, "Au"))
        return 0;
    else if (0 == strcmp(metal, "Ag"))
        return 1;
    else if (0 == strcmp(metal, "Cu"))
        return 2;
    else if (0 == strcmp(metal, "Fe"))
        return 3;
}

int main() {
    stu_t st[120];
    char metal[3];
    int m, n;
    int i, j, k;
    stu_t key, *res;

    while (EOF != scanf("%d %d", &n, &m)) {
        init_stu(st, 3 * n);
        k = 0;
        i = n;
        while (i--) {
            scanf("%s %s %s %s", st[k].no, st[k + 1].no, st[k + 2].no, metal);
            st[k].metal[metoi(metal)]++;
            st[k + 1].metal[metoi(metal)]++;
            st[k + 2].metal[metoi(metal)]++;
            k += 3;
        }
        qsort(st, 3 * n, sizeof(st[0]), comp);
        for (i = 0; i < 3 * n - 1; i++) {
            if (0 == strcmp(st[i].no, st[i + 1].no)) {
                strcpy(st[i].no, "Hello world");
                st[i + 1].metal[0] += st[i].metal[0];
                st[i + 1].metal[1] += st[i].metal[1];
                st[i + 1].metal[2] += st[i].metal[2];
                st[i + 1].metal[3] += st[i].metal[3];
            }
        }
        qsort(st, 3 * n, sizeof(st[0]), comp);
        while (m--) {
            scanf("%s", key.no);
            res = bsearch(&key, st, 3 * n, sizeof(st[0]), comp);
            if (NULL == res)
                printf("0Au 0Ag 0Cu 0Fe\n");
            else
                printf("%dAu %dAg %dCu %dFe\n", res->metal[0],res->metal[1],res->metal[2],res->metal[3]);
        }
    }

    return 0;
}
