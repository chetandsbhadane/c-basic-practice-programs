#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
//	enter any number and print and check given num is prime or not
    int n,i,f,x;
    
    f=1;
	i=2;
	
    printf("Enter a Number\n: ");
    scanf("%d",&n);
    
    while(i<=n/2)
    {
        if(n%i == 0)
        {
        	x = 0;
        	break;
		}
    	i++;
    }
    
    if(x==0){
    	printf("\n%d this is not a prime number",n);
	}
	else{
		printf("\nthis is prime num %d",n);
	}

	return 0;
}
