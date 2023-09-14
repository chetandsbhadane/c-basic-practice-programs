#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i,n;
	
	scanf("%d",&n);
	i=2;
	
	while(i<=n/2){
		if(n%i==0){
			printf("%d\n",i);
		}
		i++;
		
	}
//	printf("odd or prime number");
	
	return 0;
}
