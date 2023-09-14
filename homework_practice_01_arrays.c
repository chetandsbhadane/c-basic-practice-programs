#include <stdio.h>
#include <stdlib.h>
#define max 20
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


//enter any n numbers and search for smallest no greater no and average of all the numbers


//accept any n numbers and find even nos and stored in even array, find the odd numbrs and stored in odd array display even and odd arrays.
//enter any 10 nos and display in ascending and descending order.
//enter any 10 nos and count how many nos are divisibble by 3 and 5, how many nos divisible by 3 only and no divisible by 5 only and not divisible by 3 and 5.
//enter any n numbrs and count how many nos are prime numbers

int main() {
	
	int i,cal,search,n,j,smallest;
	int arr[max];
	
	printf("enter number to store in array\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){ //i=0 0<5, 1<
		scanf("%d",&arr[i]); //n[i] = 51
		
	}
	smallest = arr[0];						// sma == 1
	for(i=0;i<n;i++){ 				//   
		if(smallest>arr[i]){ 			// 5>1
			smallest = arr[i];			// 
		}										
	}
	printf("The smallest number is %d\n",smallest);

	
	return 0;
}
