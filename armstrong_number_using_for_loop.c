#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i,j,r,n,ans=0;
	
	printf("enter any number\n");
	scanf("%d",&n); //370
	j = n;
	
	for(i=0;n!=0;i++){
		
		r = n%10; 	//370%10 = 0, 37%10 = 7
		ans = ans + (r*r*r);  //0 + 0*0*0 = 0, 0+(7*7*7) = 
		n = n/10 ;	//370/10 = 37, 3
		
	}
	if(ans==j){
		printf("number is armstrong number\n");
	}
	else{
		printf("number is not armstrong number\n");
	}
	
	return 0;
}
