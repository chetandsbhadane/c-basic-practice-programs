#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i,j;
	
	for(i=1;i<=5;i++){ // i=1, 1<=5
		for(j=1;j<=i;j++){ //j=1,1<=1
			printf("%5d",i);
		}
		printf("\n");	
	}
	
	for(i=4;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("%5d",i);
		}
		printf("\n");
	}
		
		
	return 0;
}
