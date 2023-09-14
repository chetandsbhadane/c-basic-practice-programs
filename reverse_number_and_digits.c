

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n,i,ans=0,r,ans2=0;
	
	printf("enyter a number");
	scanf("%d",&n); //123
	
	for(i=1;n!=0;i++){  
		r = n%10; //r = 123%10 = 3, 12%10 = 2, 1%10 = 1
		ans2 = (ans2*10)+r;
		ans = ans + (r*10); // 0+30, 30+20=50, 50+10=60;
		n = n/10; // 123/10 = 12, 12/10= 1, 1/10 = 0
	}
	printf("%d",ans);
	printf("\n%d",ans2);
	
	return 0;
}
