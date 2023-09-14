#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int arr[5] = {10,20,30,40,50};
	int i,j,k;
	
	for(i=0;i<5;i++){
		printf("%5d",arr[i]);	
	}
	
	printf("\n");
	
//	for(i=4;i>=0;i--){
//		printf("%5d",arr[i]);
//		arr[i-1] = arr[i];
//	}
	
	for(i=0;i<5;i++){
		arr[i] = arr[i+4];
//		printf("%5d",arr[i]);	
	}
//	
//	arr[i+1] = arr[i];

	for(i=0;i<5;i++){
		arr[i+1] = arr[i+1];
		printf("%5d",arr[i]);	
	}


	return 0;
}
