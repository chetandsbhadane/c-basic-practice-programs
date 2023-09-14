#include <stdio.h>
#include <stdlib.h>
#define max 20
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int set1[max],set2[max];
	int i,j,k,n,flag=0;
	int unioun[10];
	
	printf("enter array length\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&set1[i]);
	}
	for(i=0;i<n;i++){
		scanf("%d",&set2[i]);
	}
	
	for(i=0;i<n;i++){
		unioun[k] = set1[i];
		k++;
	}
	
	for(j=0;j<n;j++){
		flag=1;
		for(i=0;i<n;i++){
			if(set2[j]==set1[i]){  //40==50
				flag = 0;
				break;
			}
		}
		
	if(flag){
		unioun[k] = set2[j];
		k++;
		}
	}

	for(k=0;k<10;k++){
		printf("%5d",unioun[k]);
	}
	
	
	return 0;
}
