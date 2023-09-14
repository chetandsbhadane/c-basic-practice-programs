#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int arr[10],sum=0;
	int i,max,min,avg;
	
	printf("enter any ten numbers\n");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
		sum = sum + arr[i];
	}
	avg = sum/10;
	
	min = arr[0];
	max = arr[0];
	
	for(i=1;i<10;i++){
		if(arr[i]<min){
			min = arr[i];
		}
		else if(arr[i]>max){
			max = arr[i];
		}
	}
	printf("min number is %d\n",min);
	printf("max number is %d\n",max);
	printf("avg is %d",avg);
	
	return 0;
}
