#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i,j;
	int space=4;

	for(i=0;i<5;i++){  //1<5, 2<=5,
		for(j=0;j<space;j++){ //j=1, j<=1, j=1, j<=2 
			printf(" ");  // *					// * 
	}
	for(j=0;j<=i;j++){
		printf(" *");
	}
	printf("\n");
	space--;
 }
	space=1;
	for(i=4;i>0;i--)//reverse
	{
		for(j=0;j<space;j++)
		{
			printf(" ");
		}
		for(j=0;j<i;j++)
		{
			printf(" *");
		}
		printf("\n");
		space++;
	}
	
	return 0;
}
