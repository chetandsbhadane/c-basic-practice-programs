#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int base,power,ans=1,i;
	
	printf("enter base and power");
	scanf("%d%d",&base,&power);
	
	for(i=1;i<=power;i++){
		ans = ans*base;
	}
	printf("%d",ans);
	
	return 0;
}
