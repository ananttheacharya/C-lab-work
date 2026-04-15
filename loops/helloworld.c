#include <stdio.h>
#include <conio.h>
int main(){ 
int i, j, a, b, k;
printf("enter the number of rows you want in ur array\n");
scanf("%d", &i);
printf("enter the number of columns you want in ur array\n");
scanf("%d", &j);
int arr[i][j];
printf("enter the zaza");
a = 0;
b = 0;
for(a=0; a<i; a++){
	for(b=0; b<j; b++){
		scanf("%d", &arr[a][b]);
	}}
printf("the elements of A as input\n");
for(a=0; a<i; a++){
	for(b=0; b<j; b++){
		printf("%d\t", arr[a][b]);
	}
	printf("\n");
}

// for the next array 
int p, q, c, d;
printf("enter the number of rows you want in ur array\n");
scanf("%d", &p);
printf("enter the number of columns you want in ur array\n");
scanf("%d", &q);
int brr[p][q];
printf("enter the zaza");

for(a=0; a<p; a++){
	for(b=0; b<q; b++){
		scanf("%d", &brr[a][b]);
	}}
printf("the elements of B as input\n");
for(a=0; a<p; a++){
	for(b=0; b<q; b++){
		printf("%d\t", brr[a][b]);
	}
	printf("\n");
} // array addition go brrrrr
if(i==p && j==q){

int crr[i][j];
for(a=0; a<i; a++){
    for(b=0; b<j; b++){
        crr[a][b] = arr[a][b] + brr[a][b];
    }
}
printf("\n array A + array B is equal to:\n");
for(a=0; a<i; a++){
	for(b=0; b<j; b++){
		printf("%d\t", crr[a][b]);
	}
	printf("\n");
}
} //meow 
else{
	printf("dont try to play the fool with me niggesh");
}
// Matrix multiplication go brrrrrrrrrrrrr

 if(j==p){
 	int drr[i][q];	
 	for(a=0; a<i; a++){
 		for(b=0; b<q; b++){
 			drr[a][b]=0;
 			for(k=0; k<j; k++){
			 
 				drr[a][b] += arr[a][k]*brr[k][b];
 			}
		 }
	 }
	 printf("the multiplication of the array is \n\n");
	 for(a=0; a<i; a++){
	 	for(b=0; b<q; b++){
	 		printf("%d\t", drr[a][b]);
		 }
		 printf("\n");
	 }
 }
 else{
 	printf("dont try to play the fool with me niggesh");
 }
getch();
return 0;
}
