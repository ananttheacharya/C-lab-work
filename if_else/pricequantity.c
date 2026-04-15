#include <stdio.h>

int main() {
    int quantity;
    float price, total;

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    printf("Enter price per item: ");
    scanf("%f", &price);

    total = quantity * price;

    if (total > 5000) {
        total = total * 0.9; // 10% discount
    }

    printf("Total expense = %.2f\n", total);

    return 0;
}
