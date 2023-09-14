#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int num,remainder,ans=0,temp,orignalNum;
	
	printf("enter any number\n");
	scanf("%d",&num);
	orignalNum = num;
	
	while(orignalNum!=0){ //371
		
		remainder = orignalNum%10; // 371%10 = 1, 37%10 = 7
		ans += (remainder * remainder * remainder); //0+1*1*1 = 1 + 7*7*7 = 49*7 = 
		
		orignalNum /= 10; // 37
	}
	if(num==ans){
		
        printf("\n%d is an Armstrong number.", num);
        
	}    
    else{
	
        printf("\n%d is not an Armstrong number.", num);
	}
	
	return 0;
}
