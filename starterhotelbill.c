#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int ch,ch2,counter=0;
	int total;
	float cgst,sgst,finaltotal;
	
	menu:
	printf("--------------------Starter-----------------");
	printf("\n1)Papad\t:\t50\n2)Soup\t:\t100\n3)Chinese\t:\t150\n");
	printf("\nEnter your choice....\n");
	scanf("%d",&ch);
	
	if(ch==1){
		total = total+50;
	}
	else if(ch==2){
		total = total+100;
	}
	else if(ch==3){
		total = total+150;
	}
	
	printf("Do you want to order from starter again?\n");
	scanf("%d",&ch2);
	if(ch2==1){
		goto menu;
	}
	
	
	if(ch>=3){
		counter++;
	}
	
	printf("------------------bill-------------------\n");
	cgst = total*0.06;
	sgst = total*0.04;
	finaltotal = total+cgst+sgst;
	
	printf("total items:%d\n",ch);
	printf("cgst:%.2f\n",cgst);
	printf("sgst:%.2f\n",sgst);
//	printf("total:%d\n",total);
	printf("final payable amt:%.2f",finaltotal);
	
	
//	printf("")
	
	return 0;
}
