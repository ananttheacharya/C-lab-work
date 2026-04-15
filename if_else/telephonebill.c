#include <stdio.h>

int main() {
    int calls;
    float bill = 200;

    printf("Enter number of calls: ");
    scanf("%d", &calls);

    if (calls > 100) {
        if (calls <= 150) {
            bill += (calls - 100) * 0.60;
        } 
        else if (calls <= 200) {
            bill += 50 * 0.60;
            bill += (calls - 150) * 0.50;
        } 
        else {
            bill += 50 * 0.60;
            bill += 50 * 0.50;
            bill += (calls - 200) * 0.40;
        }
    }

    printf("Total bill = %.2f\n", bill);

    return 0;
}
