#include <stdio.h>
#include <stdlib.h>
#define max 100
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//int numFibonacci(int arr_lenght, int* arr){
//	int i,j,k,cnt,temp;
//	
//	i = 0;
//	j = 1;
//	
//	for(cnt=1;cnt<10;cnt++){ //1,  2,  3
//		
//		k = i+j;  //k = 0+1 = 1, 1 + 1 = 2, 1 + 2= 3
////		printf("%5d",k); //1,2
//		i = j; //i = 1, i = 1
//		j = k; // j = 1, j = 2
//	}
//
//}

int main() {
	
	int i,j,k,cnt,temp=0;
	int array_lenght,arr[max];
	i = 0;
	j = 1;
	
	
	
	scanf("%d",&array_lenght);
	
	for(j=0;j<array_lenght;j++){
	scanf("%d",&arr[j]);
//	if(arr[j]==k){
//		printf("%d",arr[j]);
//	}
}
	
	for(cnt=1;cnt<10;cnt++){ 

	k = i+j;  
//	printf("\n%d",i);
//	temp = temp + k;/
	temp = i;
	for(i=0;i<array_lenght;i++){
		if(temp==arr[j]){
			printf("hg");
		}
	}
		i = j; 
		j = k; 
	}
	
//	printf("%d",temp);
	
	
//	int* arr = (int*)malloc(array_lenght * sizeof(int));


//	for(i=0;i<=array_lenght;i++){
//
//		}
//	}

//	int result;
//	result = numFibonacci(array_lenght,arr);
//	printf("\n%d",result);
	
	return 0;
}
