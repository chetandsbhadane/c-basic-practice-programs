#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


//enter base and power and print the answer 2 raise to 4 = 8

int main() {
	
	int base,power,ans,i=1;
	
//	power = 1;
	ans = 1;
	
	printf("enter base\n");
	scanf("%d",&base);
	
	printf("enter power\n");
	scanf("%d",&power);
	
	while(i<=power){
		ans = ans*base;
		i++;
	}
	
	printf("%d",ans);
	
	return 0;
}
