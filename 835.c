#include<stdio.h>

void reverse(char a[8][8]) {
    char b[8][8];
    int i, j;

    for (i = 0; i < 8; i++)
        for (j = 0; j < 8; j++)
            b[i][j] = a[i][j];
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            a[i][j] = b[j][7 - i];
        }
    }
}

void coin(char a[8][8]) {
    int i, j;
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            scanf("%c", &a[i][j]);
            //printf("a[%d][%d] = %c\n", i, j, a[i][j]);
        }
        getchar();
    }
}

int comp(char a[8][8], char b[8][8]) {
    int i, j;
    int score = 0;
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            if (a[i][j] == b[i][j]) {
                if ('.' == a[i][j])
                    score += 1;
                else if ('*' == a[i][j])
                    score += 2;
                else if ('#' == a[i][j])
                    score += 3;
            }
        }
    }
    
    return score;
}

void print(char a[8][8]) {
    int i, j;
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            printf("%c", a[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    char a[8][8], b[8][8], c[8][8];
    double score;
    int i;

    scanf("%d", &n);
    getchar();
    while (n--) {
        coin(a);
        getchar();
        coin(b);
        getchar();
        score = 0;
        for(i = 0; i < 4; i++) {
            reverse(a);
            score += (double)comp(a, b);
        }
        score /= 4.0;
        printf("%.2lf\n", score);
    }

    return 0;
}
