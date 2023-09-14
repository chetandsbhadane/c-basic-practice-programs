#include <stdio.h>
#include <stdlib.h>
#define max 20
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int arr[max];
	int n,i,search;
	int flag=0;
	
	printf("How many elements do you want in array");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
//		printf("%d this is a index",i);
	}
	printf("enter a number do you want to search");
	scanf("%d",&search);
	
	for(i=0;i<n;i++){
		if(arr[i]==search){
		flag = 1;
		break;
		}
	}

	printf("%d is the number at %d location.. location of actual num index at %d",search,i+1,i); //

	
	return 0;
}

//---------- REFER THIS ------------
//i+1 why used
//ans - num -	1	2	3	4	5
//		index-	0	1	2	3	4


//enter any n numbers and search for smallest no greater no and average of all the numbers
//accept any n numbers and find even nos and stored in even array, find the odd numbrs and stored in odd array display even and odd arrays.
//enter any 10 nos and display in ascending and descending order.
//enter any 10 nos and count how many nos are divisibble by 3 and 5, how many nos divisible by 3 only and no divisible by 5 only and not divisible by 3 and 5.
//enter any n numbrs and count how many nos are prime numbers

