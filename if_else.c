#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int n;
	
	printf("enter eny number: \n");
	scanf("%d",&n);
	
	if(n>0){
		printf("%d is positive",n);
	}
	else if(n<0){
		printf("%d is negative number\n",n);
	}
	
	else{
		printf("%d is zero",n);
	}
	

	return 0;
}
