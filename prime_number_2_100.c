#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i,n,remainder;
	int sum=0;
	scanf("%d",&n);
	int temp;
	temp = n;
	while(n!=0){
		
		remainder = n%10;  //123%10 = 3
		sum = (sum*10) + remainder; // 30+2=32*10=  
		printf("%d",sum); // 32
		n = n/10;
	}
	printf("%d",remainder);
	if(temp == sum){
		printf("\npallidrome");
	}
	else{
		printf("\nnot pallidrome");
	}
	
	return 0;
}
