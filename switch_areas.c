#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int ch;
	float r,h,l,b,base,ar,ac,at;
	
	area:
		printf("\n-----------------	AREA APPLICATION ------------------");
		printf("\n c or C for AREA OF CIRCLE");
		printf("\n r or R for AREA OF RECTANGLE");
		printf("\n t or T for AREA OF TRIANGLE");
		printf("\nEnter your choice....");
		
		ch = getch();
		
		switch(ch){
			case 'c':
			case 'C':
				printf("\nEnter the radius:");
				scanf("%f",&r);
				ac = 3.14*r*r;
				printf("%.2f\n",ac);
			break;
			//case 1 is done
			case 'r':
			case 'R':
				printf("\nEnter the length and breadth:");
				scanf("%f%f",&l,&b);
				ar = l*b;
				printf("%.2f\n",ar);
			break;
			//case 2 is done here
			case 't':
			case 'T':
				printf("\nEnter the base and height:");
				scanf("%f%f",&base,&h);
				at = 0.5*base*h;
				printf("%.2f\n",at);
			break;
			//case 3 is done here	
		}
		
		printf("\nDo you want to continue again?\n");
		printf("press y or n");
		
		ch = getch();	
		if((ch=='y')||(ch=='Y')){
			goto area;
		}
			
	return 0;
}
