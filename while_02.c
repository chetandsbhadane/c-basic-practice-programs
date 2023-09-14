#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i,j=0;
	i = 2;
	while((i<=20)){
		printf("%5d",i);
		i=i+2;
		j = j+i;
		
	}
//	i += i;
	printf("\n%d",j);
	return 0;
}
