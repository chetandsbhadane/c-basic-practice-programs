#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define CONST 0.5
int main() {
	float base,h,area;
	
	printf("\n\t---------------------->\tLets find out AREA OF TRIANGLE\t<-------------------\n\n");
	printf("\n\t\t\t\tEnter value of base\t: ");
	scanf("%f",&base);
	
	printf("\n\t\t\t\tEnter value of height\t: ");
	scanf("%f",&h);
	
	area = CONST*base*h;
	
	printf("\n\t\t\t\tThe area of Triangle is\t: %.2f\n\n\n\n\n\n",area);
	
	
	return 0;
}
