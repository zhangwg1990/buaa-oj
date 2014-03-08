#include<stdio.h>
#include<ctype.h>

void init(int a[10][10]) {
    int i, j;
    for (i = 0; i < 10; i++)
        for (j = 0; j < 10; j++)
            a[i][j] = ' ';
}

int main() {
    int t;
    int a[10][10];
    int n;
    int i, j, k;
    char ch;
    char b[30];
    scanf("%d", &t);
    while (t--) {
        getchar();
        scanf("%c %d", &ch, &n);
        init(a);
        for (i = 0; i < 3 * n - 2; i++) {
            if (isalpha(ch + i)){
                b[i] = ch + i;
            } else {
                ch = ch - 26;
                b[i] = ch + i;
            }
        }
        k = 0;
        for (j = 0; j < n; j++) {
            for (i = 0; i < n; i++) {
                if (0 == j || n - 1 == j) {
                    a[i][j] = b[k];
                    k++;
                } else if(i == j){
                    a[i][j] = b[k];
                    k++;
                }
            }
        }
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                printf("%C", a[i][j]);
            }
            printf("\n");
        }
    }
}
