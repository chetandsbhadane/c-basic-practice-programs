#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int n,i=0,add=0,mod;
	int a,b,c,d;
	
	scanf("%d",&n);
	
	if((n>=100)&&(n<=200)){
			a = n/4;
			b = n/4;
			c = n/4;
			d = n/4;
			printf("%d\n",a);
			printf("%d\n",b);
			printf("%d\n",c);
			add = add+a+b+c+d;
			if(add!=n){
				mod = n-add;
				printf("%d",d+mod);
			}
			else{
				printf("%d\n",d);
			}
			
		
//			printf("\nadd is %d",add);

	}
	else{
		printf("INVALID INPUT");
	}

	
		
	return 0;
}
