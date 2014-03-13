#include <stdio.h>

int main() {
    int a1, b1, c1;
    int a2, b2, c2;

    while (EOF != scanf("%d %d %d", &a1, &b1, &c1)) {
        scanf("%d %d %d", &a2, &b2, &c2);
        if (a1 * b2 == a2 * b1 && c1 != c2)
            printf("Safe and Sound\n");
        else 
            printf("Dead End\n");
    }

    return 0;
}
