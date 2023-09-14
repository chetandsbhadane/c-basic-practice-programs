#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i,j,k;
	
	i = 65;
	for(k=1;k<=7;k++){ //k=1, 1<=7
		for(j=1;j<=i;j++){ //j=1, 1<=1
			printf("%c",i++);
		}
		printf("\n");
	}
	return 0;
}
