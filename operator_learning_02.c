#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int x,y;
	
	x=1;
	y=1;
	int a,b;
	
	a = x++ + x++ + x++ + x++ + x++;
	b = ++y + ++y + ++y + ++y + ++y;
	printf("a = %d",a);
	printf("\nx = %d",x);
	printf("\ny = %d",y);
	printf("\nb = %d",b);
	
	return 0;
}
