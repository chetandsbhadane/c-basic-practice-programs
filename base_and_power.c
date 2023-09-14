#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int base,power,cal=1,i;
	
	printf("enter base>\n");
	scanf("%d",&base);
	
	printf("enter power>\n");
	scanf("%d",&power);
	i=1;
	
	while(i<=power){
		cal = cal*base;
//		printf("%d",power);
		i++;
		
	}
	
	printf("%d",cal);
	
	
	return 0;
}
