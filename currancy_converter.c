#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
//	currancy converter
//
//1 = rs
//2 - dollar
//3 - eeuro
//
//enter your choice to convert currancy
//ch=1
//-----------------------------------------
//1 = rs
//2 - dollar
//3 - eeuro
//
//enter your choice to convert currancy
//ch=2


	/* PLEASE READ THE COMMENTS IF NOT UNDERSTANDING */
	
	//declaration part
	int ch1,ch2,ch3,ch;
	float rs,us,euro,cal;
	
	
	Menu:
	printf("\n\n-------------------- 		CURRENCY CONVERTER		-------------------------\n\n");
		
	printf("1) Rupees\n");
	printf("2) Dollar\n");
	printf("3) Euro\n");
	
	printf("\nEnter your choice to convert currency: \t");
	scanf("%d",&ch1);
	
	//for rupees
	if(ch1==1){
		printf("\n1) Rupees\n");
		printf("2) Dollar\n");
		printf("3) Euro\n");
		printf("\nEnter your choice to convert currency: \t");
		scanf("%d",&ch2);
//		entger your ammount in rs 10000
		printf("\nEnter ammount in rs:\t");
		scanf("%f",&rs);

		//for rupees to dollar
		if(ch2==2){
			cal = rs * 0.013;
//			1000 rs = 13 dollar
			printf("\n-----------------------------------------");
			printf("\n|\t%.2f Rupees = %.2f Dollar\t|",rs,cal);
			printf("\n-----------------------------------------");
		}
			
		//rupees to euro
		else if(ch2==3){
				cal = rs * 0.012;
				printf("\n-----------------------------------------");
				printf("\n|\t%.2f Rupees = %.2f Euros\t|",rs,cal);
				printf("\n-----------------------------------------");		
		}
		else if(ch2==1){
				printf("\n-----------------------------------------");
				printf("\n|\t%.2f Rupees = %.2f Rupees\t|",rs,rs);
				printf("\n-----------------------------------------");
		}
	}
	
	
	//for dollar
	else if(ch1==2){
			
		printf("\n1) Rupees\n");
		printf("2) Dollar\n");
		printf("3) Euro\n");
		printf("\nEnter your choice to convert currency: \t");
		scanf("%d",&ch2);

		printf("\nEnter ammount in USD:\t");
		scanf("%f",&us);
		
		//dollar to ruppes
		if(ch2==1){
			
			cal = us * 76.04;
			printf("\n%.2f Dollar = %.2f Rupees",us,cal);
		}
		else if(ch2==2){
			
			printf("\n%.2f Dollar = %.2f Dollar",us,us);
		}
		
		//dollar to euro
		else if(ch2==3){
			
			cal = us * 0.89;
			printf("\n%.2f Dollar = %.2f Euros",us,cal);
		}
		
	}
	//for euro
	else if(ch1==3){
			
		printf("\n1) Rupees\n");
		printf("2) Dollar\n");
		printf("3) Euro\n");
		printf("\nEnter your choice to convert currency: \t");
		scanf("%d",&ch2);

		printf("\nEnter ammount in EROS:\t");
		scanf("%f",&euro);
		
		//euro to rupees
		if(ch2==1){
			
			cal = euro * 85.71;
			printf("\n%.2f Euros = %.2f Rupees",euro,cal);
		}
		
		//euros to dollar
		else if(ch2==2){
			cal = euro * 1.13;
			printf("\n%.2f Euros = %.2f Dollar",euro,cal);

		}
		
		else if(ch2==3){
			
			printf("\n%.2f Euros = %.2f Euros",euro,euro);
			
		}
		
	}
	
	
	
	printf("\n\nDo you want to continue? \n(if yes, press 1 otherwise 2)");
	scanf("%d",&ch);
	if(ch==1){
		goto Menu;
	}
	
	
	printf("\n----------------------		THANK-YOU VISIT		--------------------------\n\n\n");

	
	return 0;
}
