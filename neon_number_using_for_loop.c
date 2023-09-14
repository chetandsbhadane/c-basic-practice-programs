#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i,square,ans=0,n,r,orignalN;
	
	printf("enter any number\n");
	scanf("%d",&n); //9
	square = n * n ;
	
	
	for(i=0;orignalN!=0;i++){
		
//		square = orignalN*orignalN;  // 9 * 9 = 81
		r = square%10; // 81%10 = 1
		ans = ans + (r); // 1 +
		orignalN = orignalN/10; //81/10 = 8
	}
	if(square == ans){
		printf("Neon number");
	}
	else{
		printf("not neon number");
	}
	return 0;
}
