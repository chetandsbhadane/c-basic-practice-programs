#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
//	factors of numbers
	int num,factors=1,ans=0;
	
//	factorial=1;
	printf("enter any number\n");
	scanf("%d",&num);
	
	while(factors<=num){
		if(num%factors==0){
			printf("%d\n",factors); 
		}
		factors++; 
	}
	printf("\n");
	
	
	return 0;
}
