#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
int a, b, c, s, area;
printf("enter first side"); scanf("%d\n", &a); printf("enter the second side"); scanf("%d\n", &b); printf("enter the third side");
scanf("%d\n", &c); 
s = (a + b + c)/2; area = sqrt(s*(s-a)*(s-b)*(s-c)); printf("%d\n", area);
getch();

}
