#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i,j,k,n;
	int z;
	
	n=5;
	z=1;
	
	for(i=1;i<=5;i++){ //n=1
		for(j=1;j<=n-i;j++){ //1<=1
			printf(" ");
		}
		for(k=5;k>=z;k++){//1<=1
			printf("*");
		}
		printf("\n");
		z = z + 1;
	}
//	for(i)
	
	return 0;
}
