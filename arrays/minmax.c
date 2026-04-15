#include <stdio.h>

int main() {
    int num, max, min;
    char choice;

    printf("Enter a number: ");
    scanf("%d", &num);

    max = min = num;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > max)
            max = num;
        if (num < min)
            min = num;

        printf("Continue? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("Maximum = %d\nMinimum = %d\n", max, min);

    return 0;
}
