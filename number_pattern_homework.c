#include <stdio.h>
#include <stdlib.h>
#define max 20
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int arr[5] = {10,20,30,40,50};
	int i;
	int n=5;
	
	for(i=0;i<n;i++){
		printf("%5d",arr[i]);
	}
	printf("\n");
	for(i=0;i<5;i++){
		arr[i+1] = arr[i];
		arr[i] = arr[n-1];
		printf("%5d",arr[i]);
	}
	
	
	
	
	
	
	
	return 0;
}
