#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int ch;
	do
	{
		printf("enter your standard");
		printf("\n1-10th standard\n2-12th standard");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("1-polytecnic\n2-iti\n3-nursing");
				scanf("%d",&ch);
				switch(ch)
					{
						case 1:
							printf("\t\tPOLITECNIC");
							printf("\n\t- diploma in civil engineering\n\t-diploma in cpmputer engineering\n\t-diploma in it engineering\n\t-diploma in mechanical engineering");
						break;
						case 2:
							printf("\n\t\tITI(INDUSTRIAL TRAINING INSTITUTE )");
							printf("\n\t-Architectural Draughtsman\n\t- Attendant Operator (Chemical Plant)\n\t-Baker Confectioner\n\t- Basic Cosmetology");
						break;
						case 3:
							printf("\n\t\tNURSING");
							printf("\n\t-GNM Course \n\t-ANM Course");
						break;
							
					}
			break;
			
			case 2:
				
				printf("\n\t1-Engineering");
				printf("\n\t2-Medical");
				printf("\n\t3-Commerce");
				printf("\n\t4-BSC(bachler of science)");
				printf("\n\t5-Hotel management");
				printf("\n\t6-BBA(bachler of business administration)");
				printf("\n\t7-BCA(bachler of computer application)");
				scanf("%d",&ch);
				
				switch(ch)
				{
					case 1:
						printf("\n\t\tENGINEERING");
						printf("\n\t-Aerospace/aeronautical engineering.");
						printf("\n\t-Chemical engineering.");
						printf("\n\t-Civil engineering.");
						printf("\n\t-Electrical/electronic engineering.");
						printf("\n\t-Mechanical engineering.");
					break;
					
					case 2:
						printf("\t\tMEDICAL");
						printf("\n\t-MBBS");
						printf("\n\t-BAMS");
						printf("\n\t-BDS");
						printf("\n\t-BHMS");
						printf("\n\t-Forensic Medicine");
						printf("\n\t-Anesthesiology");
					break;
					
					case 3:
						printf("\t\tBSC(bachler of science)");
						printf("\n\t-BSc Agriculture.");
						printf("\n\t-BSc Biotechnology.");
						printf("\n\t-BSc Zoology.");
						printf("\n\t-BSc Forestry.");
						printf("\n\t-BSc Microbiology.");
						printf("\n\t-BSc Nursing.");
						printf("\n\t-B.Sc. Physiotherapy.");
					break;
					
					case 4:
						printf("\t\tHOTEL MANAGEMENT");
						printf("\n\t- Bachelor of Hotel Management (BHM)");
						printf("\n\t-Bachelor in Hotel Management and Catering Technology (BHMCT)");
						printf("\n\t-BSc in Hospitality and Hotel Administration");
						printf("\n\t- BA in Hotel Management");
						printf("\n\t-BBA in Hospitality, travel & tourism");
						printf("\n\t-BBA in Hotel Management");
					break;
					
					case 5:
						printf("\t\tBBA (Bachler of business administration)");
						printf("\n\t-Finance.");
						printf("\n\t-Marketing.");
						printf("\n\t-Aviation Management.");
						printf("\n\t-Entrepreneurship.");
						printf("\n\t-Supply Chain & Logistics.");
					break;
					
					case 6:
						printf("\t\tBACHLER OF COMPUTER APPLICATION");
						printf("\n\t-bca");
					break;
						
						
				}
				
		}
		printf("\n\ndo you want to continue?\n");
		scanf("%d",&ch);
	}
	while(ch);
	printf("---------------THANK YOU-------------------");


	return 0;
}
