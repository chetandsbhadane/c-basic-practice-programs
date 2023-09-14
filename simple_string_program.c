#include <stdio.h>
#include <stdlib.h>
main( )
{
	int a=1,b=1;
	int c;
	
	c = a++ + ++a;
	printf("%d",c);
 return 0;
}
