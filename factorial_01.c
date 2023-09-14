#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
    int n,i,f;
    f=1;
	i=1;
    printf("Enter a Number to Find Factorial: ");
    scanf("%d",&n);
    while(i<=n)
    {
        f= f*i;
        i++;
    }
    printf("The Factorial of %d is : %d",n,f);
	
	return 0;
}
