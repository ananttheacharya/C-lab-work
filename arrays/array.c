#include <stdio.h>
#include <conio.h>
int main(){
	int l;
	printf("enter the length of your array");
	scanf("%d", &l);
	int shwet[l];
	int i;
	printf("enter the zaza");
	for(i=0; i < l; i++){
		scanf("%d", &shwet[i]);
		}
	printf("the array is");
	for(i=0; i < l; i++){
		printf("%d\n", shwet[i]);
	}
	int max = shwet[0];
	int min = shwet[0];
	for (i = 0; i<l; i++){
		if(shwet[i]>max){
			max = shwet[i];
		}
		if(shwet[i]<min){
			min = shwet[i];
		}
	}
	printf("Maximum Element: %d\n", max);
	printf("Minimum Element: %d\n", min);
	
	getch();
	
}
