#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i,j,k,n;
	int z;
	
	n=5;
	z=1;
	
	for(i=1;i<=n;i++){ //n=5
		for(j=1;j<=n-i;j++){ //1<=4
			printf(" ");
		}
		for(k=1;k<=z;k++){//1<=1
			printf("*");
		}
		printf("\n");
		z = z + 2;
	}
	
	return 0;
}
