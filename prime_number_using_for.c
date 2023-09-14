#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i,n,check=1;
	
	printf("enter any number\n");
	scanf("%d",&n); //11
	
	for(i=2;i<=n/2;i++){  // 2<=11
		if(n%i==0){  // 11%2 = 1
			check = 0;
			break;
		}
	}
	if(check){
		printf("number is prime number\n");
	}
	else{
		printf("number is not a prime number\n");
	}
	return 0;
}
