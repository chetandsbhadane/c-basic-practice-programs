#include <stdio.h>
#include <stdlib.h>
#define max 20
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int arr[max];
	int i,j,k,n;
	int earr[max],oarr[max];
	
	printf("enter numbers to array\n");
	scanf("%d",&n);
	j = 0;
	k = 0;
	
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		if(arr[i]%2==0){
			earr[j] = arr[i];
			j++; 
		}
		else{
			oarr[k] = arr[i];
			k++;
		}
	}
	printf("\n\nEven numbers are %d\n\n",j);
	for(i=0;i<j;i++){
		printf("%5d",earr[i]);
	}
	printf("\n\nodd numbers are %d\n\n",k);
	for(i=0;i<k;i++){
		printf("%5d",oarr[i]);
	}

	return 0;
}
