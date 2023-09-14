#include <stdio.h>
#include <stdlib.h>
#include<time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	//Declaration Part
	int ch1,starterchoice,vegchoice,nonvegch,co1=0,co2=0,co3=0;
	int papad,soup,chinese,v1,v2,v3,nv1,nv2,nv3;
	float total,starterOrders=0,vegOrders=0,nonVegOrders=0,cgst,sgst,totalamt,finalamt;
//	time_t t;   // not a primitive datatype
//    time(&t);
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
	
	
	//MAIN MENU 
	Menu1:
	printf("-------------------MAIN MENU--------------------------------------");
	printf("\n1) Starters\n2) Veg-Menu\n3) Non-Veg\n");
	printf("Enter your choice: \n");
	scanf("%d",&ch1);
	
	if(ch1==1){
		//STARTERS
		StarterMenu:
		printf("\n-------------------WELCOME TO STARTERS MENU------------------\n");
		printf("\n1) Papad\t:\t50\n2) Soup\t\t:\t100\n3) Chinese\t:\t150\n");
		printf("\nEnter order number: \n");
		scanf("%d",&starterchoice);
		
		if(starterchoice==1){
			papad = 50;	
			total = papad;

		}
		else if(starterchoice==2){
			soup = 100;
			total = soup;
		}
		else if(starterchoice==3){
			chinese = 150;
			total = chinese;
			
		}
		
		starterOrders += total;
//		co1 = starterchoice++;
		if(starterchoice<=3){
			co1++;
		}

		printf("Do you want to order from starter again? \n");
		scanf("%d",&ch1);
		if(ch1==1){
			goto StarterMenu;

		}
	
		printf("\nBack to the MAIN MENU:\t");
		scanf("%d",&ch1);
		if(ch1==1){
			goto Menu1;
		}	
		
		
	}	
	else if(ch1==2){
		//VEG MENU
		VegMenu:
		printf("\n-------------------WELCOME TO VEG-MENU------------------\n");
		printf("\n1) Mix-Paneer\t:\t250\n2) Shahi-Panir\t:\t280\n3) Mix-Veg\t:\t300\n");
		printf("\nEnter order number: \n");
		scanf("%d",&vegchoice);
		
		if(vegchoice==1){
			v1 = 250;
			total = v1;	

		}
		else if(vegchoice==2){
			v2 = 280;
			total = v2;
		}
		else if(vegchoice==3){
			v3 = 300;
			total = v3;
		}
		
		vegOrders += total;
//		co2 = vegchoice++;
		if(vegchoice<=3){
			co2++;
		}
		
		printf("Do you want to order from Veg-Menu again? \n");
		scanf("%d",&ch1);
		if(ch1==1){
			goto VegMenu;

		}
		
		printf("Back to the MAIN MENU:\t");
		scanf("%d",&ch1);
		if(ch1==1){
			goto Menu1;
		}
		
	}
	else if(ch1==3){
		//NON-VEG MENU
		NonVegMenu:
		printf("\n-------------------WELCOME TO NON-VEG-MENU------------------\n");
		printf("\n1) Chicken-Handi\t:\t250\n2) Chicken-Fry\t\t:\t280\n3) Matar-Chicken\t:\t300\n");
		printf("\nEnter order number: \n");
		scanf("%d",&nonvegch);
		
		if(nonvegch==1){
			nv1 = 250;
			total = nv1;	

		}
		else if(nonvegch==2){
			nv2 = 280;
			total = nv2;
		}
		else if(nonvegch==3){
			nv3 = 300;
			total = nv3;
		}
		
		nonVegOrders += total;
//		co3 = nonvegch++;
		if(nonvegch<=3){
			co3++;
		}
		
		printf("Do you want to order from Non-Veg-Menu again? \n");
		scanf("%d",&ch1);
		if(ch1==1){
			goto NonVegMenu;

		}
		
		printf("Back to the MAIN MENU:\t");
		scanf("%d",&ch1);
		if(ch1==1){
			goto Menu1;
		}
	}
	
	//PRINTING THE BILL
	printf("\n----------------------------------------- YOUR BILL ------------------------------------------\n\n");
	printf("\t      Current Date  : %d-%d-%d", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
	printf("\t\t  Current Time\t: %d:%d:%d\n\n", tm.tm_hour, tm.tm_min, tm.tm_sec);
//	printf("\t\tDate and time\t:\t%s", ctime(&t));
	printf("\t\t\t-------------------------------------------------\n");
	printf("\t\t\t|\tStarter\t\t:\t%.2f(%d)\t|\n\n",starterOrders,co1);
	printf("\t\t\t|\tVeg\t\t:\t%.2f(%d)\t|\n\n",vegOrders,co2);
	printf("\t\t\t|\tNon-Veg\t\t:\t%.2f(%d)\t|\n\n",nonVegOrders,co3);
	
	
	//CALCULATIONS PART
	totalamt = starterOrders+vegOrders+nonVegOrders;
	cgst = 0.06 * totalamt;
	sgst = 0.04 * totalamt;
	finalamt = totalamt+cgst+sgst;
	
	printf("\t\t\t|\ttotal Amt\t:\t%.2f\t\t|\n",totalamt);
	printf("\n\t\t\t|\tcgst\t\t:\t%.2f\t\t|\n",cgst);
	printf("\n\t\t\t|\tsgst\t\t:\t%.2f\t\t|\n",sgst);
	printf("\n----------------------------------------------------------------------------------------------");
	printf("\t\t\t | Final Payable Amount  :  %.2f\t\t |",finalamt);
	printf("\n----------------------------------------------------------------------------------------------\n\n\n\n\n\n\n");
	
//	printf("total starter: %d",co1);
//	printf("total veg: %d",co2);
//	printf("total non veg: %d",co3);
//	
	return 0;
}
