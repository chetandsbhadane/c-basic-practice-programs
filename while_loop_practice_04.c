#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
//	enter any num and print reverse of number 123  == 321
	
	int num,temp,sum=0;
	
	printf("enter any number\n");
	scanf("%d",&num);
	
	while(num!=0){
		temp = num%10; // 123%10=3, 12%10= 2 1%10 = 1
		printf("%d",temp);//3,2,1
		num = num/10;  //123/10=12, 12/10=1, 1/10 = 0
		sum = sum+temp; //0+3= 3+2 = 6+0 = 6
	}
	printf("\n%d is the total of the digits",sum); //6
	
	return 0;
}
