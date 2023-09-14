#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i,n,perfect=0;
	
	printf("enter any number\n");
	scanf("%d",&n); // 6
	
	for(i=1;i<=n/2;i++){ //1<=6 , 
		if(n%i==0){ //6%2 = 0 
			perfect = perfect+i; // 0+1= 1, 
		}
	}
	if(perfect==n){
		printf("number is perfect no\n");
	}
	else{
		printf("number is not perfect\n");
	}
	return 0;
}
