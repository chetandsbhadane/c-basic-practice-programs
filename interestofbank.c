#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int acNum,numOfMon,total;
	char name[10];
	float mbal,interestrate,interestamt,totalIntamt;
	
	printf("Enter The Account Number: ");
	scanf("%d",&acNum);
	
	printf("Enter Your Name: ");
	scanf("%s",name);
	
	printf("Enter The Monthly Bal: ");
	scanf("%f",&mbal);
	
	printf("Enter number of months: ");
	scanf("%d",&numOfMon);
	
	printf("Enter Interest rate: ");
	scanf("%f",&interestrate);
	
	total = numOfMon*mbal;
	interestamt = total*interestrate;
	totalIntamt = total+interestamt;
	
	printf("\n\t--------------------------  ACCOUNT DETAILS  ----------------------------");
	printf("\n\t|\t\tAccount No\t\t: \t%d\t\t\t|",acNum);
	printf("\n\t|\t\tCustomer Name\t\t: \t%s\t\t\t|",name);
	printf("\n\t|\t\tMonthly Balance\t\t: \t%.2f\t\t\t|",mbal);
	printf("\n\t|\t\tNo of Months\t\t: \t%d\t\t\t|",numOfMon);
	printf("\n\t|\t\tTotal\t\t\t: \t%d\t\t\t|",total);
	printf("\n\t|\t\tInterest Rate\t\t: \t%.2f\t\t\t|",interestrate);
	printf("\n\t|\t\tinterest Amount\t\t: \t%.2f\t\t\t|",interestamt);
	printf("\n\t-------------------------------------------------------------------------");
	printf("\n\t|\t\tFinal Amount\t\t: \t%.2f\t\t|",totalIntamt);
	printf("\n\t-------------------------------------------------------------------------\n");
	printf("\n\t\t\t\t\tTHANK-YOU\n\n\n");
	
	 
	
	
	return 0;
}
