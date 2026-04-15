#include <stdio.h>

int main() {
    int a[100], n, i, j, count;

    scanf("%d", &n);
    for(i = 0; i < n; i++) scanf("%d", &a[i]);

    for(i = 0; i < n; i++) {
        count = 1;
        for(j = i+1; j < n; j++) {
            if(a[i] == a[j]) count++;
        }

        for(j = 0; j < i; j++) {
            if(a[i] == a[j]) break;
        }

        if(j == i)
            printf("%d -> %d times\n", a[i], count);
    }

    return 0;
}
