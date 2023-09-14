#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int cno;
	char name[10];
	float noofunits,total;
	
	printf("Enter the consumer number: \n");
	scanf("%d",&cno);
	
	printf("Enter your name: \n");
	scanf("%s",name);
	
	printf("Enter number of units: \n");
	scanf("%f",&noofunits);
	
	total = noofunits*3.33;
	printf("%d",total);
	
	
	return 0;
}
