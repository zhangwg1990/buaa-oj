#include<stdio.h>

int main() {
    FILE *p, *q;
    int n = 0;
    char a, b;

    p = fopen("./data2", "r");
    q = fopen("./data3", "r");
    while (EOF != (a = getc(p)) && EOF != (b = getc(q))) {
        if (a != b) {
            printf("here is the dif %d\n", n);
        }
        n++;
    }
}
