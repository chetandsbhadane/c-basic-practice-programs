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

	
	if((noofunits < 100)){
		
			total = noofunits*3.33;
			printf("%f",total);
			
	}
	
	else if((noofunits >= 100 ) && (noofunits < 300)){
			
		if((noofunits >= 100) && (noofunits < 250)){
			total = noofunits*3.33;
			printf("%f",total);
		}
		else{
			total = noofunits*7.77;
			printf("%f",total);
		}
						
	}
	
		
	else{
		if((noofunits >= 300) && (noofunits <= 400)){
			
			total = noofunits*3.33;
			printf("%f",total);
		}
		else if((noofunits >= 400) && (noofunits <= 600)){
			
			total = noofunits*7.77;
			printf("%f",total);
		}
		else{
			
			total = noofunits*17.33;
			printf("%f",total);
		}
	}

	
	return 0;
}
