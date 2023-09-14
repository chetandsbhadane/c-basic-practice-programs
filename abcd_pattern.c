#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i,j,k;
	
	k = 65;
	for(i=1;i<=7;i++){ //k=1, 1<=7
		for(j=1;j<=i;j++){ //j=1, 1<=1
			printf("%5c",k++);
		}
		printf("\n");
	}
	return 0;
}
