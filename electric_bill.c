#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int units,hour,cost,total,reading,diff,cno;
	float perrate,cgst,sgst,finalAmnt,gsttotal;
	char name[10];
	
	
	printf("Enter your consumer number: \n");
	scanf("%d",&cno);
	
	printf("Enter your name:  \n");
	scanf("%s",name);
	
	printf("Enter your billing units: \n");
	scanf("%d",&units);
	
	printf("Enter your per unit rate: \n");
	scanf("%f",&perrate);
	
	
//	scanf("%d",&units);
	total = units*perrate;
	cgst = total*0.06;
	sgst = total*0.04;
	finalAmnt = total+cgst+sgst;
	
//	fprice = units*9;
//	scanf("%d%d%d",units,hour,cost);
	reading = 9000+units;
	diff = reading-9000;
	gsttotal = cgst+sgst;
	
	
//	printf("%d",fprice);
	printf("\n--------------------------------------->KNOW YOUR E-BILL<-------------------------------------\n\n");
	printf("\t\t\t\t\tINVOICE-Dec-2021\n");
	printf("\n\tBill to: \t%s\t\t\t|\tInvoice:\t#00001",name);
	printf("\n\tAddress: \tNear Sinhgad Academy\t|\tDate:\t\t25-Dec-2021\n\t\t\tOf Engineering\t\t|");
	printf("\n\tCity: \t\tPune\t\t\t|\tBill due: \t2-Dec-2021");
	printf("\n\tCountry: \tIndia\t\t\t|\tBilling unit: \t%d",units);
	printf("\n\tPostal: \t411048\t\t\t|\tLast Date: \t20-Dec-2021\n\n");
	printf("\n\tConsumer No: %d\n\n",cno);
	printf("\t----------------------------------------------------------------------------\n");
	printf("\tReading\t    PreviousReading\tUnit\tReading Diff\tCgst/Sgst\tTotal");
	printf("\t\t%d\t\t9000\t\t%d\t\t%d\t%.2f\t\t%d\n",reading,units,diff,gsttotal,total);
	printf("\t----------------------------------------------------------------------------\n\n");
	printf("\t\tDue Date: 2-Dec-2021\t\tAmount Payable: %.2f\n",finalAmnt);
	printf("\t----------------------------------------------------------------------------\n\n\n");


	return 0;
}
