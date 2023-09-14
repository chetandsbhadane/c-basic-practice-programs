#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,mul;
	
	printf("enter any number");
	scanf("%d",&mul);
	i = 1;
	
	while(i<=10){
		printf("\t%d\tx\t%d\t:\t%d\n",i,mul,i*mul);
		i++;
	}
	return 0;
}
