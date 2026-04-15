#include <stdio.h>

int main() {
    char str[100], sub[50];
    int i, j;

    gets(str);
    gets(sub);

    for(i = 0; str[i] != '\0'; i++) {
        for(j = 0; sub[j] != '\0'; j++) {
            if(str[i+j] != sub[j])
                break;
        }
        if(sub[j] == '\0') {
            printf("Found at position %d\n", i);
            return 0;
        }
    }

    printf("Not found\n");

    return 0;
}
