#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 5; i++) {
        // spaces
        for(j = 1; j <= 5 - i; j++) {
            printf(" ");
        }

        // decreasing
        for(j = i; j >= 1; j--) {
            printf("%d", j);
        }

        // increasing
        for(j = 2; j <= i; j++) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
