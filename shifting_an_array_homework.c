#include <stdio.h>
#include <stdlib.h>
#define max 20
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int arr[max],arr2[5];
	int i,j,k,n;
	
	k=0;
	
	printf("enter how many elements do you want\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("\n");
	
	for(i=0;i<n;i++){
//		arr[i] = arr[5];
		printf("%5d",arr[i]);
	}
	printf("\n");

	for(i=0;i<n;i++){
		
	}


//	arr2[k+1] =  arr[i];
//	n++;
	
	return 0;
}
