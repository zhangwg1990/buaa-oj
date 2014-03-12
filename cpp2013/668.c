#include <stdio.h>

int main() {
    int n;
    int size;
    int i, j, k;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &size);
        for (i = 0; i < 2 * size - 1; i++) {
            if (i < size)
                k = i;
            else 
                k = 2 * size - i - 2;
            for (j = 0; j < size - k - 1; j++)
                printf(" ");
            for (; j < size + k; j++)
                printf("*");
            printf("\n");
        }
    }
    return 0;
}
