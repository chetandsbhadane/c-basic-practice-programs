#include <stdio.h>
#include <stdlib.h>
#define max 20
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int set1[max],set2[max],unioun[max],inter[max];
	int n1,n2;
	int i,j,k=0,ch;
	int flag=1;
	
	printf("How many nos do you want in set1..\n");
	scanf("%d",&n1);
	printf("Enter %d elements in set1\n",n1);
	for(i=0;i<n1;i++){
		scanf("%d",&set1[i]);
	}
	
	printf("How many nos do you want in set2..\n");
	scanf("%d",&n2);
	printf("Enter %d elements in set1\n",n2);
	for(j=0;j<n2;j++){
		scanf("%d",&set2[j]);
	}
	
	printf("1)union\n2)intersection\n");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			for(i=0;i<n1;i++){
				unioun[k] = set1[i];
				k++;
			}
			
			printf("-----union of set1 and set2-----");
			for(j=0;j<n2;j++){
				flag = 1;
				for(i=0;i<n1;i++){
					if(set1[i] == set2[j]){
						flag=0;
						break;
					}
				}
				if(flag){
					unioun[k] = set2[j];
					k++;
				}
			}
			printf("\n");
			for(i=0;i<k;i++){
				printf("%d",unioun[i]);
		
			}
		break;
		
		case 2:
			for(j=0;j<n1;j++){
				flag = 0;
				for(i=0;i<n2;i++){
					if(set1[i] == set2[j]){ //40==40
						inter[k] = set1[i];
						k++;
					}
				}
			}
			printf("\n");
				for(i=0;i<k;i++){
					printf("%5d",inter[i]);
			}
			
		break;
	

	}

	return 0;
}
