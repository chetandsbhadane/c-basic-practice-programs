#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i,j,k=1;
	
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
//			k = k + 1;
			printf("%d",k++);		
		}
		printf("\n");
	}
	
	return 0;
}
