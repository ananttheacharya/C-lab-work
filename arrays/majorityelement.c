#include <stdio.h>

int main() {
    int a[100], n, i, j, count;

    scanf("%d", &n);
    for(i = 0; i < n; i++) scanf("%d", &a[i]);

    for(i = 0; i < n; i++) {
        count = 0;
        for(j = 0; j < n; j++) {
            if(a[j] == a[i]) count++;
        }
        if(count > n/2) {
            printf("Majority = %d\n", a[i]);
            return 0;
        }
    }

    printf("No majority element\n");
    return 0;
}
