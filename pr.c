#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
    int n,i,f,x=0;
    f=1;
	i=1;
    printf("Enter a Number to Find Factorial: ");
    scanf("%d",&n);
    while(i<=n/2)
    {
        if(n%i==0)
        {
        	x=0;
        	break;
		}
    	i++;
    }
//    if(f==)
    if(x==1){
    	printf("%d",n);
	}
	else{
		printf("\nthis is not prime num%d",n);
	}

//    printf("The Factorial of %d is : %d",n,f);
	
	return 0;
}
