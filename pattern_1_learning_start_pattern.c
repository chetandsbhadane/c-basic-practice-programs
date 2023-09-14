#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i,j;
	
	for(i=1;i<=5;i++){  //1<5, 2<=5,
		for(j=1;j<=i;j++){ //j=1, j<=1, j=1, j<=2 
			printf("*  ");  // *
							// * *
		}
		printf("\n");
	}
	
	return 0;
}
