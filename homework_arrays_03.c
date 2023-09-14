#include <stdio.h>
#include <stdlib.h>
#define max 20
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//accept any n numbers and find even nos and stored in even array, find the odd numbrs and stored in 
//odd array display even and odd arrays.

int main() {
	
	int i,n,even=0,odd=0;
	int arr[max],evenarr[0],oddarr[10];
	
	printf("enter n number to store array\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++){
		if(arr[i]%2==0){
			evenarr[0] = evenarr[0] + arr[i];
			printf("%d",evenarr[0]);
		}
	}
	
	return 0;
}
