#include <stdio.h>
#include <stdlib.h>
#define max 20
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i,n,ch,search,flag=0,loc,ele,j,temp;
	int arr[max];
	
	do{
		printf("1)Create\n2)Display\n3)Search\n4)Insert\n5)Delete");
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
			
			case 3:
				printf("enter number do you want to search\n");
				scanf("%d",&search);  // 0 - 10, 1 - 20, 2 - 30, 3 - 40, 5 - 50
				for(i=0;i<n;i++){   //i=0, i<
					if(arr[i]==search){
						flag = 1;
						break;
					}
				}
				if(flag){
					printf("%d is found at %d location",search,i+1);
				}
				else{
					printf("%d is not found in the array\n",search);
				}
				break;
				
			case 4:
				printf("enter number to insert and loc");
				scanf("%d%d",&ele,&loc);
				for(i=n-1;i>=loc-1;i--){ // 0 - 10, 1 - 20, 2 - 30, 3 - 40, 5 - 50,  index=4; 1>=2
					arr[i+1] = arr[i]; //  arr[2+1] = 3 == 30
					
				}
				arr[loc-1] = ele; //3-1= 2 === 60
				n++;
				break;
				
			case 5:
				printf("enter location to delete the element\n");
				scanf("%d",&loc);
				ele = arr[loc-1];
				for(i=loc-1;i<n;i++){  // i=3-1 = 2   2<5 				 0	1	2	3	4	5
													//  				10	20	60	30	40	50
					arr[i] = arr[i+1];   // arr[2] = 60 = arr[2+3] = 30 
				}
				n--;
				printf("%d is the number was deleted\n",ele);
				break;
				
			case 6:
//				int max;
//				arr[0] = max;
//				int j,temp;
				for(i=0;i<n;i++){
					for(j=i+1;j<n;j++){
						if(arr[i] > arr[j]){
							temp = arr[i];
							arr[i] = arr[j];
							arr[j] = temp;
						}
					}
				}
				printf("The numbers arranged in ascending order are given below \n");
        		for (i = 0; i < n; ++i){
				
            		printf("%d\n", arr[i]);
							
				}
 
    }
		
		
	printf("\n\nenter 1 to continue");
	scanf("%d",&ch);
	}while(ch==1);
	

	return 0;
}
