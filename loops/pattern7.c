#include <stdio.h>

int main() {
    int i, j, k, n = 4;

    for(i = 1; i <= n; i++) {

        // spaces
        for(j = 1; j <= n - i; j++) {
            printf("  ");
        }

        // increasing numbers
        k = i;
        for(j = 1; j <= i; j++) {
            printf("%d ", k++);
        }

        // decreasing numbers
        k = k - 2;
        for(j = 1; j < i; j++) {
            printf("%d ", k--);
        }

        printf("\n");
    }

    return 0;
}
