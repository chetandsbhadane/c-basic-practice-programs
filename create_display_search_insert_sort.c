#include <stdio.h>
#include <stdlib.h>
#define max 20
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i,n,ch;
	int arr[max];
	
	printf("1)Create\n2)Display\n3)Search\n");
	printf("enter your choice\n");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			printf("enter a number for array\n");
			scanf("%d",&n);
			
			for(i=0;i<n;i++){
				scanf("%d",&arr[i]);
			}
			break;
			
		case 2:
			for(i=0;i<n;i++){
				printf("%5d",arr[i]);
			}
			break;
			
	}
	

	
	
	
	return 0;
}
