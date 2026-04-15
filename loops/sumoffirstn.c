#include <stdio.h>

int sumN(int n) {
    int i, sum = 0;
    for(i = 1; i <= n; i++)
        sum += i;
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("Sum = %d\n", sumN(n));
    return 0;
}
