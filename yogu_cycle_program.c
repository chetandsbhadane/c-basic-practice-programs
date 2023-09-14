#include <stdio.h>
#include <stdlib.h>
#define max 20
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int arr[5] = {10,20,30,40,50};
	int i,j,k;
	
	for(i=0;i<5;i++){
		printf("%5d",arr[i]);
	}
	printf("\n");
	for(i=4;i<5;i++){
		printf("%5d",arr[i]);
		for(i=0;i<4;i++){
			printf("%5d",arr[i]);
		}
	}
	printf("\n");
	for(i=3;i<5;i++){
		printf("%5d",arr[i]);
	}
		for(i=0;i<3;i++){
			printf("%5d",arr[i]);
		}
		
	printf("\n");
	for(i=2;i<5;i++){
		printf("%5d",arr[i]);
	}
		for(i=0;i<2;i++){
			printf("%5d",arr[i]);
		}
		
	printf("\n");
	for(i=1;i<5;i++){
		printf("%5d",arr[i]);
	}
		for(i=0;i<1;i++){
			printf("%5d",arr[i]);
		}
		
	printf("\n");
	for(i=0;i<5;i++){
		printf("%5d",arr[i]);
	}
		for(i=0;i<0;i++){
			printf("%5d",arr[i]);
		}
	
	return 0;
}
