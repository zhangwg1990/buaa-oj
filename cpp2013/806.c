#include <stdio.h>

void init(int a[]) {
    int i;
    for (i = 0; i < 20; i++) {
        a[i] = 0;
    }
}

int main() {
    int n;
    int tmp, l1, l2;
    int row[20], col[20];
    int flag;
    int i, j;
    char ch;
    while (EOF != scanf("%d", &n)) {
        init(row);
        init(col);
        l1 = 0;
        l2 = 0;
        getchar();
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                ch = getchar();
                printf("%c", ch);
                tmp = ch - '0';
                row[i] += tmp;
                col[j] += tmp;
                if (i == j)
                    l1+= tmp;
                if (n - 1 == i + j)
                    l2+= tmp;
            }
            printf("\n");
            getchar();
        }
        flag = 1;
        if (1 != l1 || 1 != l2) {
            flag = 0;
        } else {
            for (i = 0; i < n; i++) {
                if (1 != row[i] || 1 != col[i]) {
                    flag = 0;
                }
            }
        }
        if (1 == flag)
            printf("Move Forward!\n");
        else
            printf("Bad End!\n");
    }

    return 0;
}
