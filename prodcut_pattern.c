#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i,j,k;
	
	for(i=1;i<=10;i++){
		for(j=1;j<=10;j++){
			k = i*j;
			printf("%5d",k);
		}
		printf("\n");
	}
	return 0;
}
