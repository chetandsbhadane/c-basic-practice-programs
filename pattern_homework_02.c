#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i,j,k;
	
	for(i=97;i<=101;i++){
		for(j=97;j<=i;j++){
			printf("%3c",i);
		}
		printf("\n");
	}
	for(i=100;i>=97;i--){
		for(j=97;j<=i;j++){
			printf("%3c",i);
		}
		printf("\n");
	}
	
	return 0;
}
