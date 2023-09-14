#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
//	enter any number of arrray and even and odd
	int arr[10],i,temp=0;
	int even=0,odd=0;
	
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
		if(arr[i]%2==0){
			even++;
//			printf("%d");
		}
		else{
			odd++;
		}
	}
	printf("even nos are %d\n",even);
	printf("odd nos are %d\n",odd);


	return 0;
}
