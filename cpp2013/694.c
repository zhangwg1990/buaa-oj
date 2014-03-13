#include <stdio.h>

int main() {
    int n;
    int size;
    int i, j, k;
    while (EOF != scanf("%d", &size)) {
        for (i = 0; i < size; i++) {
            if (i < (size + 1) / 2)
                k = i;
            else 
                k = size - i - 1;
            for (j = 0; j < (size - 1) / 2 - k; j++)
                printf(" ");
            for (; j < (size + 1) / 2 + k; j++) {
                if (0 == (j + i + size / 2) % 2)
                    printf("*");
                else 
                    printf("#");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
