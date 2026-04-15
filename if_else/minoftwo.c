#include <stdio.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Min = %d\n", min(a, b));
    return 0;
}
