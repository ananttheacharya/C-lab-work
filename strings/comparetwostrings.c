#include <stdio.h>

int main() {
    char s1[100], s2[100];
    int i = 0, flag = 1;

    gets(s1);
    gets(s2);

    while(s1[i] != '\0' || s2[i] != '\0') {
        if(s1[i] != s2[i]) {
            flag = 0;
            break;
        }
        i++;
    }

    if(flag) printf("Equal\n");
    else printf("Not Equal\n");

    return 0;
}
