#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i,j,k,cnt,m=0,n=1;
	
//	i = 0;
//	k = 0;
	for(i=0;i<=5;i++){  //0,  1
		for(j=0;j<=i;j++){  // 0<=0,  0<=1
		
			printf("%7d",k);  //0, 1
			
			m = n; //m=0
			n = k; // n=0
			k = m+n;
		}
		
		printf("\n\n"); 

//		k = m+n; 
  
//		m = k;
//		i = j;  //i = j, i = 0
//		j = k; // j = 0
	}
	
	return 0;
}
