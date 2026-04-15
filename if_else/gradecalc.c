#include <stdio.h>

int main() {
    float m1, m2, m3, m4, m5, total, percent;

    printf("Enter marks of 5 subjects: ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percent = total / 5;

    printf("Percentage = %.2f\n", percent);

    if (percent >= 60) {
        printf("First Division\n");
    } 
    else if (percent >= 50) {
        printf("Second Division\n");
    } 
    else if (percent >= 40) {
        printf("Third Division\n");
    } 
    else {
        printf("Fail\n");
    }

    return 0;
}
