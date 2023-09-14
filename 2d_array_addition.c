#include <stdio.h>
#include <stdlib.h>
#define max 20
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int mat1[max][max],mat2[max][max],mat3[max][max];
	int i,j,n;
	int r1,c1,r2,c2;
	
	printf("how many rows and colomns do you want in matrix-1\n");
	scanf("%d%d",&r1,&c1);
	
	printf("how many rows and colomns do you want in matrix-2\n");
	scanf("%d%d",&r2,&c2);
	
	if((r1==r2)&&(c1==c2)){
		printf("enter elements in mat-1\n");
		for(i=0;i<r1;i++){
			for(j=0;j<c1;j++){
				scanf("%d",&mat1[i][j]);
			}
		}
		printf("enter elements in mat-1\n");
		for(i=0;i<r2;i++){
			for(j=0;j<c2;j++){
				scanf("%d",&mat2[i][j]);
			}
		}
		
		for(i=0;i<r1;i++){
			for(j=0;j<c2;j++){
				mat3[i][j] = mat1[i][j] + mat2[i][j];
				printf("%5d",mat3[i][j]); 
			}
			printf("\n");
		}
		
//		for(i=0;i<r2;i++){
////			mat1[]
//		}
		
	}

	
	
	return 0;
}
