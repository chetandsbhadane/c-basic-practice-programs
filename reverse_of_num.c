#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int n,r,sum=0;
	printf("ENter ant num");
	scanf("%d",&n);
	
	while(n!=0){
		
		r = n%10;//r=123%10, r=12%10=2, r=1%10=1      125%10 = 5,  12%5 = 2, 1%5 = 0
		printf("%d",r); //5,2,1
		n = n/10;//n=123/10 = n=12, n=12/10 n=1/10 = 0   125/10 = 12, 12/10= 1
		sum = sum+r;
	}
	
	printf("\nsum of digit is %d",sum);
	return 0;
}
