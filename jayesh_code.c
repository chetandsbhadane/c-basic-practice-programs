#include <stdio.h>
#include <stdlib.h>
#define max 20
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int arr1[max],arr2[max];
	int i;
	char inp1[max],inp2[max];
	
	scanf("%s",inp1);
//	printf("%s\n",inp1);
	scanf("%s",inp2);
//	printf("%s",inp2);
	
//	for(i=0;i<inp1;i++){
//		printf("%s",inp1);
//	}
	
//	char distance = abs(inp1-inp2);
//	if (distance > 1) {
//  		distance = 26 - distance;
//  			printf("%d",distance);
//		}
//	int k;

	size_t j = 0;
	while (inp1[j] != '\0') {       /* Stop looping when we reach the null-character. */
    	printf("%c\n", inp1[j]);    /* Print each character of the string. */
    	j++;
	}
	
	size_t k = 0;
	while (inp2[k] != '\0') {       /* Stop looping when we reach the null-character. */
//    	printf("%c\n", inp2[k]);    /* Print each character of the string. */
    	k++;
    		int flag=0;
	int cal=0;
	if(inp2[k]==inp1[j])	{
		flag = 1;
	}
	else{
		char distance = abs(inp2-inp1);
		distance = 26 - distance;
		cal += cal+distance;
		printf("%d",cal);
	}
	}

		
	return 0;
}
