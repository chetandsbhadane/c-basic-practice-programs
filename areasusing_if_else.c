#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int ch;
	float l,h,base,total,cal;
	
	menu:
	printf("------------MAIN MENU--------------");
	printf("1)Area of RECTANGLE\n2)Area of CIRCLE\n3)Area of TRIANGLE\n");
	scanf("%d",&ch);
	
	if(ch==1){
		printf("Enter the length:\n");
		scanf("%f",l);
		
	}
	return 0;
}
