#include <stdio.h>
#include <stdlib.h>
#define max 20
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int arr[max];
	int i,j,n;
	int small,big,avg,sum=0;
	
	printf("enter an array of which lenght\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		sum = sum + arr[i];
	}
	avg = sum/n;
	
	
	small = arr[0] ;
	big = arr[0] ;
		
	for(i=0;i<n;i++){
		if(arr[i] < small){
			small = arr[i];
		}
		
		else if(arr[i] > big){
			big = arr[i];
		}
	}
	printf("smallest number is\n");
	printf("%d",small);
	printf("\n\n");

	printf("biggest number is\n");
	printf("%d",big);
	
	printf("\n\nAverage of numbers is \%d",avg);
	
	return 0;
}
