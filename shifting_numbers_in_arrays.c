#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int set1[5] = {10,20,30,40,50};
	int set2[5] = {30,60,10,70,80};
//	int set01[5];
	int i,j,k,m,ch,n;
	int arr1[10],arr2[10];
	int flag=0;
	
	j=0;
	k=0;
	m=0;
	n=0;
	
	do{
		printf("1)Unioun\n2)Intersection\n3)set1-set2\n4)set2-set1\n");
		scanf("%d",&ch);

		switch(ch){
			case 1:
				printf("\n----------- set-1 -----------\n\n");
				for(i=0;i<5;i++){
					printf("%5d",set1[i]);
				}
				printf("\n\n----------- set-2 -----------\n");
				printf("\n");
				for(i=0;i<5;i++){
					printf("%5d",set2[i]);
				}
				printf("\n\n");
				printf("--------- Unioun of set-1 and set-2 ---------\n\n");
				
				for(i=0;i<5;i++){ //i=0,
//					set01[n] = set1[i];
					arr1[j] = set1[i]; // 0 = 10, 
					printf("%5d",arr1[j]); // 10
				}
				
				for(i=0;i<5;i++){ //i=1, 4<5,
					for(m=0;m<5;m++){ //m=0, 0<5   set1 = {10,20,30,40,50};   set2 = {30,60,10,70,80};							
						if(set1[m] == set2[i]){  //50==70 = true, 
							flag=1;
							break;
						}
						else{
							flag=2; //60,70
						}
					}
			
				if(flag==2){
					printf("%5d",set2[i]); //60,70,80
				}
			}
			break;
			
			
			case 2:
				printf("\n----------- set-1 -----------\n\n");
				for(i=0;i<5;i++){
					printf("%5d",set1[i]);
				}
				printf("\n\n----------- set-2 -----------\n");
				printf("\n");
				for(i=0;i<5;i++){
					printf("%5d",set2[i]);
				}
				printf("\n\n");
				printf("--------- Intersection of set-1 and set-2 ---------\n\n");
				
				
				for(i=0;i<5;i++){ //i=1, 2<5,
					for(m=0;m<5;m++){ //m=0, 0<5   set1 = {10,20,30,40,50};   set2 = {30,60,10,70,80};							
						if(set1[m] == set2[i]){  //50==70 = true, 
							flag=1;
							break;
						}
						else{
							flag=2; //60,70
						}
					}
			
				if(flag==1){
					printf("%5d",set2[i]); //60,70,80
					}
			}
			
			break;
			
			case 3:
				printf("\n----------- set-1 -----------\n\n");
				for(i=0;i<5;i++){
					printf("%5d",set1[i]);
				}
				printf("\n\n----------- set-2 -----------\n");
				printf("\n");
				for(i=0;i<5;i++){
					printf("%5d",set2[i]);
				}
				printf("\n\n");
				printf("--------- set-1 - set-2 ---------\n\n");
				
				
				for(i=0;i<5;i++){ //i=1, 2<5,
					for(m=0;m<5;m++){ //m=0, 1<5, 	//set1 = {10,20,30,40,50};   set2 = {30,60,10,70,80};					
						if(set1[m] == set2[i]){   //10==60
							flag=1;
							break;
						}
						else{
							flag=2; //20
						}
					}
			
				if(flag==2){
					printf("%5d",set1[i]); //
					}
			}
			break;
			
			case 4:
				printf("\n----------- set-1 -----------\n\n");
				for(i=0;i<5;i++){
					printf("%5d",set1[i]);
				}
				printf("\n\n----------- set-2 -----------\n");
				printf("\n");
				for(i=0;i<5;i++){
					printf("%5d",set2[i]);
				}
				printf("\n\n");
				printf("--------- set-2 - set-1 ---------\n\n");
				
				
				for(i=0;i<5;i++){ //i=1, 2<5,
					for(m=0;m<5;m++){ //m=0, 1<5, 	//set1 = {10,20,30,40,50};   set2 = {30,60,10,70,80};					
						if(set1[m] == set2[i]){   //10==60
							flag=1;
							break;
						}
						else{
							flag=2; //20
						}
					}
			
				if(flag==2){
					printf("%5d",set2[i]); //
					}
			}
			break;
		}
	
	printf("\n\n\nenter 1 to continue\n");
	scanf("%d",&ch);
	}while(ch==1);
	
	return 0;
}
