#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define pi 3.14
int main() {
	int area,l,b;
	float r,area2,area3,base,h;
	printf(">>>>>>>>>>>>>>>>>>>>>>>>>\tFind out area of Rectangle\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
	printf("Enter the lenght and breadth of Rectangle: \n");
	scanf("\n%d\n%d",&l,&b);
	area = l*b;
	printf("Area of rectangle is %d\n",area);
	printf("--------------------------------------------------------------------\n\n");
	printf(">>>>>>>>>>>>>>>>>>>>>>>>>\tFind out area of Circle\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
	printf("Enter radius: \n");
	scanf("%f",&r);
	area2 = pi*r*r;
	printf("Area of the circle is = %.2f",area2);
	
	printf("---------------------------------------------------------------------\n\n");
	printf(">>>>>>>>>>>>>>>>>>>>>>>>>\tFind out area of triangle\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
	printf("Enter base and height of Triangle: \n");
	scanf("%f%f",&base,&h);
	area3 = 0.5*base*h;
	printf("Area of the Triangle is %.2f",area3);
	
	return 0;
}
