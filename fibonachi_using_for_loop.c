#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i,j,k,cnt;
	
	i = 0;
	j = 1;
	
	for(cnt=1;cnt<10;cnt++){ //1,  2,  3
		
		k = i+j;  //k = 0+1 = 1, 1 + 1 = 2, 1 + 2= 3
		printf("%5d",k); //1,2
		i = j; //i = 1, i = 1
		j = k; // j = 1, j = 2
	}

	
	return 0;
}
