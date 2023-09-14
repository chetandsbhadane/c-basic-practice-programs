#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int order,ch;
	float sgst,cgst,total,finaltotal;
	menu:
		printf("\n1-starter\n2-main course\n3-deserts");
		printf("\nenter your choice\n");
		scanf("%d",&ch);
		if(ch==1)
		{
			start:
				printf("--------starter-------");
			printf("\n1-masala papad\n2-tomato soup\n3-manchurian");
			printf("\nenter your choice\n");
			scanf("%d",&ch);
			if(ch==1)
			{
				printf("your papad order is placed\nKINDLY WAIT A FIVE MINUT");
				total=total+30;
			}
			else if(ch==2)
			{
				printf("your tomato soup order is placed\nKINDLY WAIT A FIVE MINUT");
				total=total+60;
			}
			else if(ch==3)
			{
				printf("your manchurian order is placed\nKINDLY WAIT A FIVE MINUT");
				total=total+80;
			}
			printf("\ndo you want to continue with starter again press 1 \n");
			scanf("%d",&ch);
			if(ch==1)
			{
				goto start;}
			else
			{
				goto menu;
			}
	
		}
		else if(ch==2)
		{
			mains:
				printf("-------main cources-------");
			printf("\n1-paneer tikka\n2-dal fry\n3-mix veg\n");
			printf("enter your choice");
			scanf("%d",&ch);
			if(ch==1)
			{
				printf("your paneer tikaa order placed succesfully\nKINDLY WAIT A FIVE MINUT");
				total=total+230;
			}	
			else if(ch==2)
			{
				printf("your dal fry order placed succes fully\nKINDLY WAIT A FIVE MINUT");
				total=total+160;
			}
			else if(ch==3)
			{
				printf("your mix veg order placed succefull\nKINDLY WAIT A FIVE MINUTE");
				total=total+250;
			}
			printf("\ndo you want continue with our main course press 1");
			scanf("%d",&ch);
			if(ch==1)
			{
				goto mains;
			}
			else
			{
				goto menu;
			}
			
		}
		else if(ch==3)
		{
			desert:
					printf("--------deserts-------");
				printf("\n1-ice cream\n2-hot chocolate\n3-fruit salad");
				printf("enter your choice");
				scanf("%d",&ch);
				if(ch==1)
				{
					printf("your ice cream order placed succefull\nKINDLY WAIT A FIVE MINUTE");
					total=total+200;
				}
				else if(ch==2)
				{
					printf("your hot chocolate order placed succefull\nKINDLY WAIT A FIVE MINUTE ");
					total=total+230;
				}
				else if(ch==3)
				{
					printf("your fruit salad order placed succefull\nKINDLY WAIT A FIVE MINUTE");
					total=total+100;
				}
				else
				{
					printf("invalid choice");
				}
				printf("\ndo you want to contine with main menu press 1 or BILL\n");
				scanf("%d",&ch);
				if(ch==1);
				{
					goto menu;
				}
		
		}
		
	cgst=total*0.5;
	sgst=total*0.6;
	finaltotal=total+cgst+sgst;
	
	
	bill:
    printf("\n-------------------------------------------");
	printf("\n-----------HOTEL GREEN PIECE---------------");
	printf("\n-------------------------------------------");
	printf("\n\tnear bus stand pune\tmo.no-014782        ");
	printf("\n\tonline order is acceptable\t date-20/11-2021               ");
	printf("\n-------------------------------------------");
	printf("\n\tTOTAL:%f",total);
	printf("\n\tCGST:%f",cgst);
	printf("\n\tSGST:%f",sgst);
	printf("\n-------------------------------------------");
	printf("\n\t FINAL TOTAL :%f",finaltotal);
	printf("\n-------------------------------------------");
	printf("-------------THANK YOU-----------------------");
	printf("\n-----------VISIT AGAIN---------------------");
				
	   
		
	return 0;
}
