#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int n1,n2,n3;
	
	printf("Enter three numbers: ");
	scanf("%d%d%d",&n1,&n2,&n3);
	
	if((n1>n2)&&(n2>n3)){
		printf("\n%d is greater than %d and %d\n",n1,n2,n3);
	}
	
	else if((n2>n1)&&(n2>n3)){
		printf("\n%d is greater than %d and %d\n",n2,n1,n3);
		
	}
	
	else if((n3>n1)&&(n3>n2)){
		printf("%d is greater than %d and %d",n3,n2,n1);
	}
	
	else {
		printf("\nAll are same");
	}
	return 0;
}
