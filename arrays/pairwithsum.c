#include <stdio.h>

int main() {
    int a[100], n, i, sum = 0, total;

    scanf("%d", &n); // size = n-1
    for(i = 0; i < n-1; i++) scanf("%d", &a[i]);

    for(i = 0; i < n-1; i++) sum += a[i];

    total = n * (n + 1) / 2;

    printf("Missing number = %d\n", total - sum);

    return 0;
}
