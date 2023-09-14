#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int sRoll;
	char sName[10];
	float subj1,subj2,subj3,percentage;
	
	printf("Enter Student Name: \n");
	scanf("%s",sName);
	
	printf("Enter Student Roll No: \n");
	scanf("%d",&sRoll);
	
	printf("Enter sub1 Marks: \n");
	scanf("%f",&subj1);
	printf("Enter sub1 Marks: \n");
	scanf("%f",&subj2);
	printf("Enter sub1 Marks: \n");
	scanf("%f",&subj3);
	
	
	percentage = (subj1+subj2+subj3)/3;
	
	if((subj1 > 40) && (subj2 > 40) && (subj3 > 40)){
		printf("\n--------------------------------\tSTUDENT MARKSHEET\t---------------------------------\n");
		printf("\tResult \t: PASS\t");
		if(percentage < 40 ){

			printf("\twith\t%f",percentage);
			printf("\tGrade\t:\tC");
		}
		else if((percentage >= 40) && (percentage <= 60)){
//			printf("\n--------------------------------\tSTUDENT MARKSHEET\t---------------------------------\n");
			printf("\t%with\tf",percentage);
			printf("\tGrade\t:\tB");
		}
		else{
//			printf("\n--------------------------------\tSTUDENT MARKSHEET\t---------------------------------\n");
			printf("\tResult \t: PASS\t");
			printf("\twith\t%f",percentage);
			printf("\tGrade\t:\tA");
		}
	}
	
	else{
		printf("\n--------------------------------\tSTUDENT MARKSHEET\t---------------------------------\n");
		printf("\tpercentage:\t%f",percentage);
		printf("\tResult\t:FAIL");
	}
	

	return 0;
}
