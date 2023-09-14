#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a=3,b=4,z,x;
	
	z = a++ + ++b;
//	x = ++b;
	printf("%d",z);
	printf("a - %d\t",a)
//	printf("z - %d\ta - %d\nx - %d\tb - %d",z,a,x,b);
	
//	d = (a>b)?(a>c?a:c):(b>c?b:c);
//	printf("%d is greater",d);
	return 0;
}
