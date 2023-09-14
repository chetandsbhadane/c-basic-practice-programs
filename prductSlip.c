#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int pid;
	char pName[10];
	int prodPrice,prodQty,total;
	float cgst,sgst,finalAmount;
	
	//enter your product details
	printf("------------------------------Welcome-------------------------------------\n");
	printf("Enter Product Id: \n");
	scanf("%d",&pid);
	
	printf("Enter Product Name: \n");
	scanf("%s",&pName);
	
	printf("Enter Prodcut Price: \n");
	scanf("%d",&prodPrice);
	
	printf("Enter Prodcut Quantity: \n");
	scanf("%d",&prodQty);
	

	total = prodQty*prodPrice;
	cgst = total*0.06;
	sgst = total*0.06;
	finalAmount = total+cgst+sgst;
	
	printf("\nID\tName\tQty\tPrice\ttotal\tcgst\tsgst\tfinal Amount\n");
	printf("--------------------------------------------------------------\n");
	printf("%d\t%s\t%d\t%d\t%d\t%2.f\t%2.f\t%2.f",pid,pName,prodPrice,prodQty,total,cgst,sgst,finalAmount);
	
	
	return 0;
}
