#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i,n,r,rev=0;
	
	printf("enter any number\n");
	scanf("%d",&n);
	i = n;
	do{
		r = n%10; //123%10 = 3
		rev = (rev*10) + r; //3*10 = 30 + 2*10 = 20 
//		printf("%d",r);
		n = n/10; //123/10 = 12
	}while(n!=0);
	printf("%d",rev);
	if(i==rev){
		printf("\nnumber is pallidrome");
	}
	else{
		printf("\nnum is not pallindrom");
	}
	return 0;
}
