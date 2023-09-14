#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i,j;
	i = 65;
	j = 97;
	
	while(i<=90){
		while(j<=122){
			printf("\t%d\t:%c\t|\t%d\t%c\n",i,i,j,j);
			i++;
			j++;
		}

	}
	
	printf("\n\nThank-you...");
	
	return 0;
}
