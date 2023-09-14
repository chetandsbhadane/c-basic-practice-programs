#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int sRoll;
	char sName[10];
	float subj1,subj2,subj3,percentage,total;
	
	printf("Enter Student Name: \n");
	scanf("%s",sName);
	
	printf("Enter Student Roll No: \n");
	scanf("%d",&sRoll);
	
	printf("Enter sub1 Marks: \n");
	scanf("%f",&subj1);
	printf("Enter sub2 Marks: \n");
	scanf("%f",&subj2);
	printf("Enter sub2 Marks: \n");
	scanf("%f",&subj3);
	
	total = subj1+subj2+subj3;
	percentage = total/3;
	
	
	
	printf("\n----------------------------->\tSTUDENT'S' MARKSHEET\t<------------------------------\n");
	printf("\n\t\t\tName Of The Student\t: \t%d\n",sName);
	printf("\t\t\tRollNo\t\t\t: \t%d\n",sRoll);
	printf("\t\t\tExamination Date\t: \t5-Dec-2021\n");
	printf("\t\t\tCollege Name\t\t: \tSinhgad College\n");
	printf("------------------------------------------------------------------------------------------\n");
	
	printf("\tS.No\tSubjects\tMax Marks\tMarks Obtained\t\tRemarks\n");
	printf("\t1.\t Maths\t\t100\t\t   %.2f\t\tPass\n",subj1);
	printf("\t2.\t Sci\t\t100\t\t   %.2f\t\tPass\n",subj2);
	printf("\t3.\t Comp\t\t100\t\t   %.2f\t\tPass\n",subj3);
	printf("\t------------------------------------------------------------------------\n");
	printf("\t   Grand Total\t\t300\t\t   %.2f\t\t%.2f\n",total,percentage);
	
//	printf("%.2f",percentage);
	
	return 0;
}
