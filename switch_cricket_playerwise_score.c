#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int ch1;
	int choice1;
	
	printf("--------------------- CRICKET SCORE SUMMARY ------------------------\n");
	printf("\n1) INDIA TEAM\n2) AUS TEAM\n3)  NZL TEAM\n");
	printf("Enter your choice: ");
	scanf("%d",&ch1);
	//FIRST SWITCH CASE FOR INDIA TEAM
	switch(ch1){
		case 1:
			section1:
			printf("--------------------- CRICKET SECTION - 1 ------------------------\n");
			printf("\n1) BATSMAN\n2) BOWLER\n3) ALL ROUNDER\n");
				printf("Enter your choice: ");
				scanf("%d",&ch1);
				//NESTED SWITCH CASE 1 FOR TEST CRICKET IS END
				switch(ch1){
					case 1:
						section2:
						printf("--------------------- CRICKET SECTION - 2 ------------------------\n");
						printf("\n1) VIRAT KOHLI\n2) ROHIT SHARMA\n3) SHIKHAR DHAVAN\n");
						printf("Enter your choice: ");
						scanf("%d",&ch1);
						//NESTED SWITCH CASE 1 FOR BATSMAN CRICKET IS END
						switch(ch1){
							case 1:
								section3:
								printf("--------------------- CRICKET SECTION - 3 ----------------------\n");
								printf("\n1) TEST CRICKET\n2) ODI CRICKET\n3) T20 CRICKET\n");
								printf("Enter your choice: ");
								scanf("%d",&ch1);								
								//NESTED SWITCH CASE 1 FOR BATSMAN CRICKET IS END
								switch(ch1){
									case 1:
//										printf("\n\n\t\t-------------------------- INTRODUCTION --------------------------\n\n");
										printf("\n\n\n\n\t\t\t\t\t   VIRAT KOHLI\n\n");
										printf("\t\t\tVirat Kohli is an Indian cricketer. He was born in Delhi,\n\t\tIndia on November 5, 1988. Virat is the first player in ICC cricket\n\t\thistory to win all 3 ICC awards in a single year- ICC ODI player of\n\t\tthe year, ICC Test player of the year and ICC Player of the year aw\n\t\tard in 2018.\t\n");										
									    printf("\n\n\t\t---------------------- PERSONAL INFORMATION ----------------------\n");
										printf("\n\t\t\t\tBorn\t\t:  Nov 05, 1988\n");
										printf("\t\t\t\tBirth Place\t:  Delhi\n");
										printf("\t\t\t\tHeight\t\t:  5 ft 9 in (175 cm)\n");
										printf("\t\t\t\tRole\t\t:  Batsman\n");
										printf("\t\t\t\tBatting Style\t:  Right Handed Bat\n\n");
										printf("\n   ----------------------------------- TEST CAREER SUMMARY --------------------------------\n\n");
										printf("     Matches\t   Runs\t    Hscore\tAvg\t\t100\t200\t50\t4s\t6s\n");
										printf("     97\t\t   7801\t    254\t\t50.66\t\t27\t7\t27\t872\t23\n");
										printf("\n   ----------------------------------------------------------------------------------------\n\n");
										printf("Do you want to go back? press 1\n");
										scanf("%d",&choice1);
										if(choice1==1){
											goto section3;
										}
									
									case 2:
										printf("VIRAT KOHLI\n");
										printf("\t\t----------------- PERSONAL INFORMATION -------------------\n\n");
										printf("\t\t\tBorn\t\t:  Nov 05, 1988 (33 years)\n");
										printf("\t\t\tBirth Place\t:  Delhi\n");
										printf("\t\t\tHeight\t\t:  5 ft 9 in (175 cm)\n");
										printf("\t\t\tRole\t\t:  Batsman\n");
										printf("\t\t\tBatting Style\t:  Right Handed Bat\n\n");
										printf("\n   ----------------------------------- ODI CAREER SUMMARY --------------------------------\n\n");
										printf("     Matches\t   Runs\t     Hscore\tAvg\t\t100\t200\t50\t4s\t6s\n");
										printf("     254\t   12169\t183\t59.06\t\t43\t0\t62\t1140\t126\n");
										printf("\n   ----------------------------------------------------------------------------------------\n\n");
										printf("Do you want to go on SECTION-3? press 1\n");
										scanf("%d",&choice1);
										if(choice1==1){
											goto section3;
										}
								}
								
						}
					break;
				}
		break;

		
	}
	
	
	//			printf("\n1) ODI SCORE\n2) TEST SCORE\n3) T20 SCORE\n");
	
	
	return 0;
}
