#include <stdio.h>
#include <stdlib.h>
#define max 20
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int mat1[max][max],mat2[max][max],mat3[max][max];
	int r1,c1,r2,c2;
	int i,j;
	int flag=0;
	
	
	printf("how many rows and col do you want in mat1\n");
	scanf("%d%d",&r1,&c1);
	
	printf("how many rows and col do you want in mat2\n");
	scanf("%d%d",&r2,&c2);
	
	if((r1==r2)&&(c1==c2)){
		flag = 1;
	}
	else{
		printf("addition is not possible, rows and cols are not same\n");
	}
	
	
	if(flag){
			printf("enter elements is mat1");
			for(i=0;i<r1;i++){
				for(j=0;j<c1;j++){
				scanf("%d",&mat1[i][j]);
				}
			}
			printf("\n\n");
			
			printf("enter elements is mat2");
			for(i=0;i<r2;i++){
				for(j=0;j<c2;j++){
				scanf("%d",&mat2[i][j]);
				}
			}
			printf("\n\n");
			
			printf("addition in mat3");
			for(i=0;i<r1;i++){
				for(j=0;j<c1;j++){
					mat3[i][j] = mat1[i][j] + mat2[i][j];
					printf("%5d",mat3[i][j]);
				}
				
				printf("\n");
				
			}
			printf("\n");
			
	}	

	return 0;
}
