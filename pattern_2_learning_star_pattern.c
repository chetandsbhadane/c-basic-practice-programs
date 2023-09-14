#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i,j;
	
	for(i=5;i>=1;i--){ //i=5, 1>=5
		for(j=1;j<=i;j++) // j=1, 1<=5 
		{
			printf("*  ");
		}
		printf("\n");
	}
	
	return 0;
}
