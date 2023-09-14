#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i,j,k;
	
	for(i=5;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\t\t");
		for(k=5;k>=1;k--){
			for(j=1;j<=i;j++){
				printf("* ");
				break;
			}
		}
		printf("\n");
		
	}
	for(i=2;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
	
	return 0;
}
