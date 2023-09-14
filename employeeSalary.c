#include <stdio.h>
#include <stdlib.h>
#include<time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int empId;
	char name[7];
	int empSallary,invst,incomtaxamt,finalamttax;
	float pf,hra,ta,ma,sa,gs,annual=0,monthlyinvst,monthlytax,famnt,fsal;
	time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
//    printf("%d-%d-%d", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
	
	printf("Enter Emplyoee ID: \n");
	scanf("%d",&empId);
	
	printf("Enter Employee Name: \n");
	scanf("%s",&name);
	
	printf("Enter Emplyoee Sallary: \n");
	scanf("%d",&empSallary);
	
	pf = empSallary*0.06;
	hra = empSallary * 0.05;
	ta = empSallary*0.4;
	ma = empSallary*0.07;
	sa = empSallary*0.03;
	gs = hra+ta+ma+sa-pf;
	
	annual = gs*12;
	incomtaxamt = annual - 250000;
	printf("Do you have any investment enter amount\n");
	scanf("%d",&invst);
	finalamttax = incomtaxamt-invst;
	monthlytax = finalamttax/12;
	monthlyinvst = invst/12;
	famnt = monthlytax + monthlyinvst; 
	fsal = gs-famnt;
	
	
	printf("\n\t------------------------------  EMPOLYEE RECORD  ----------------------------\t\n");
	printf("\n\tEmployee Name\t: \t%s\t\t  	PF No	:\tKN/Amazon/%d\n",name,empId);
	printf("\tEmployee Id\t: \t%d\t\t	Pan No	:\tEXKDJF45567\n",empId);
	printf("\tEmployee Sal\t: \t%d\t\t	Loc\t:\tPune\n",empSallary);
	printf("\tDesignation\t: \tJr. Developer\t\tWorked\t\t\n");
	printf("\tDate Of Joining : \t%d-%d-%d\t\tdays\t:\t30\n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
//	printf("%d-%d-%d", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
	
	printf("\n\t----------- Earnings --------------------------------- Deductions --------------\n");
	printf("\t\t\t\t\t\t\t\t\t\t  \n");
	printf("\t   Employee ta\t:  %.2f\t\t\tEmployee pf  :\t%.2f\n",ta,pf);
	printf("\t   Employee hra\t:  %.2f\t\t\tTax Amount   :  %d\n",hra,incomtaxamt);
	printf("\t   Employee sa\t:  %.2f\t\t\tYearly   \n",sa);
	printf("\t   Employee ma\t:  %.2f\t\t\tInvestments  :  %d\n",ma,invst);
	printf("\t---------------------------------------------------------------------------------\t");
	printf(" Gross Sallary\t:  %.2f\t\t\tTotal Tax    :  %d\n",gs,finalamttax);
	printf("\t---------------------------------------------------------------------------------\t\n");
	
	
//	printf("\tEmplyoee Gross Sallary\t: %.2f\n",gs);
//	rupee = \u20B9;
	
	printf("\t------------------------------  Net Payment  ------------------------------\t\n");
	printf("\t|\t\t\t\t\t\t\t\t\t  |\n");
	printf("\t|\t\tFinal Gross Sallary\t: \t%2.f Rupees\t\t  |\n",fsal);
	printf("\t|\t\t\t\t\t\t\t\t\t  |\n");
	printf("\t---------------------------------------------------------------------------\t\n\n\n\n");
	
	return 0;
}         


