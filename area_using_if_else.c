#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int ch;
	float r,b,h,l,ac,ar,at;
	
	MENU:
	printf("-------------WelCome to Area Application-------------\n");
	printf("\n1) Area of circle \n2)Area of Rectangle \n3)Area of Triangle\n");
	
	printf("\nEnter your choice....");
	scanf("%d",&ch);
	
	if(ch==1){
		printf("\nEnter value of radius:\t");
		scanf("%f",&r);
		ac = 3.14*r*r;
		printf("AREA OF CIRCLE IS %f",ac);
	}
	else if(ch==2){
		printf("Enter value of l:\t");
		scanf("%f",&l);
		printf("Enter value of b:\t");
		scanf("%f",&b);
		ar = l*b;
		printf("AREA OF RECTANGLE IS %f",ar);
	}
	else if(ch==3){
		printf("Enter value of base:\t");
		scanf("%f",&b);
		printf("Enter value of height:\t");
		scanf("%f",&h);
		at = 0.5*b*h;
		printf("AREA OF RECTANGLE IS %f",at);
	}
	
	printf("\n\nDo you want to continue? \n(if yes, press 1 otherwise 2)");
	scanf("%d",&ch);
	if(ch==1){
		goto MENU;
	}
	
	return 0;
}
