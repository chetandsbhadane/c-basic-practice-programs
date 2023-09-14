#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int ch,ch2;
	float no1,no2,cal;
	
	again:
	printf("------------calculator----------");
	printf("\nEnter first number:\n");
	scanf("%f",&no1);
	
	printf("Enter first number:\n");
	scanf("%f",&no2);
	
	printf("\n1)ADDITION\n2)SUBSTRACTION\n3)MULTIPLICATION\n4)DIVISION\n");
	printf("Enter your choice:\n");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			cal = no1+no2;
			printf("\nAddition is %.2f",cal);
		break;
		case 2:
			cal = no1-no2;
			printf("\nSubstarction is %.2f",cal);
		break;
		case 3:
			cal = no1*no2;
			printf("\nMultiplication is %.2f",cal);
		break;
		case 4:
			cal = no1/no2;
			printf("\nDivision is %.2f",cal);
		break;
	}
	printf("\nDo you want to calculate again?\n");
	scanf("%d",&ch2);
	if(ch2==1){
		goto again;
	}
	
	return 0;
}
