#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int arr[5],i;
	
	printf("Enter any five number\n");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	printf("\n-----------\n");
	for(i=4;i>=0;i--){  //i=4 , 4>=0, 3>=0 , 
		printf("%5d",arr[i]);  //50,  but i = 4,   40,  but i=3
	}
	
	return 0;
}

//enter any number of arrray and even and odd
