#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int areaC,areaR,areaT,ch1,ch;
	float l,b,h,base,r;
	
	do{
		printf("1)AREA OF CIRCLE\n2)AREA OF RECTANGLE\n3)AREA OF TRAINGLE\n\n");
		printf("enter your choice\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("\nenter radius\n");
				scanf("%f",&r);
				areaC = 3.14*r*r;
				printf("\nArea of circle is %d\n\n",areaC);
			break;
			case 2:
				printf("\nenter leangth and breadth\n");
				scanf("%f%f",&l,&b);
				areaR = l*b;
				printf("\nArea of Rectangle is %d\n\n",areaR);
			break;
			case 3:
				printf("\nenter base and height\n");
				scanf("%f%f",&base,&h);
				areaT = 0.5*base*h;
				printf("\nArea of Traingle is %d\n\n",areaT);
			break;
		}
		printf("do you want to continue\n");
		scanf("%d",&ch);
	}while(ch==1);
	
	return 0;
}
