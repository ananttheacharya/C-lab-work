#include <stdio.h>

int main() {
    int i, j, n = 5;

    // upper pyramid
    for(i = 1; i <= n; i++) {
        // spaces
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // stars
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // lower pyramid
    for(i = n; i >= 1; i--) {
        // spaces
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // stars
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
