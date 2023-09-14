#include <stdio.h>
#include <stdlib.h>
#define max 20
int main()
{
	int arr[max];
	int i,n,j,s,newno=0,loc,temp;
	int flag=0;
	int ch; 
    do
	{
		printf("\n1-create\n2-display\n3-insert\n4-sorting\n5-search\n6-delete");
		printf("\nenter your choice");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				printf("\ncreate number");
				printf("\nhow many number do you want in array");
				scanf("%d",&n);//n=5
		     	printf("\nenter the number");
				for(i=0;i<n;i++)
				{
					scanf("%d",&arr[i]);
			    }
			break;
			case 2:
				printf("display number");
				for(i=0;i<n;i++)
				{
					printf("%5d",arr[i]);
				}
				break;
			
			case 3://insert...................................
				 printf("Enter a number to insert");
				 scanf("%d",&newno);
				 printf("enter the location");
				 scanf("%d",&loc);
				 for(i=n-1;i>=loc-1;i--)
				 {
	                arr[i+1]=arr[i];
		       	 }
		       	 arr[i+1]=newno;
				 n++;//6
		    	break;
		    
			case 4:
					printf("\nsorting number");
					temp=arr[0];
					for(i=0;i<n;i++)  //20 10
					{
						for(j=i+1;j<n;j++)
					     { 
							    if(arr[i]>arr[j])  //20>10
							   {
								  temp = arr[i];
								  arr[i]=arr[j];
								  arr[j]=temp; 
							   }
				       	}
						
					}
	    		break;	
			case 5://search..............................;
				printf("\nEnter the no you want to search");
				scanf("%d",&s);      // 0-10 1-20 2-30 3-40 4-50 
			    for(i=0;i<n;i++)
				{
					if(arr[i]==s)
					{
						flag=1;
						break;
					}
				}
				if(flag)
				{
					printf("element found...");
				}
				else
				{
					printf("element not found....");
				}
				break;
			case 6://delete...............................
				printf("enter loc you want to delete");
				scanf("%d",&loc);
				for(i=loc-1;i<n-1;i++){
					arr[i] = arr[i+1];
				}
				n--;
		    	break;
		}
			printf("\n to continue press : 1 ->");
			scanf("%d",&ch);

 }while(ch==1);
	return 0;
}

