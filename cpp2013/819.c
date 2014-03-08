#include<stdio.h>

int main() {
    int t;
    int i, j;
    int n, m;
    int dis, flag;
    char ch;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &n, &m);
        i = j = 1;
        flag = 1;
        while (m--) {
            getchar();
            scanf("%c %d", &ch, &dis);
            switch (ch) {
                case 'U':
                    i -= dis;
                    break;
                case 'D':
                    i += dis;
                    break;
                case 'L':
                    j -= dis;
                    break;
                case 'R':
                    j += dis;
                    break;
                default:
                    break;
            }
            if (i < 1 || j < 1 || i > n || j > n) {
                flag = 0;
            }
        }
        if (1 == flag) {
            printf("%d\n", n * (j - 1) + i);
        } else {
            printf("WanQuanGaoBuDong!\n");
        }
    }
    return 0;
}
