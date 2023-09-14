#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i,j,k;
	char ch = '*';
	
	k = 97;
	for(i=5;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("%5c",k++);
		}
		printf("\n");
	}
	
	for(i=2;i<=5;i++){
		for(j=1;j<=i;j++){
			if(k<=122)
				printf("%5c",k++);
			else
				printf("%5c",ch);
			
		}
		printf("\n");
	}
	
	return 0;
}
