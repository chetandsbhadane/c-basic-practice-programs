#include<stdio.h>
int main()
{
		int ch1,ch2;
		float samt,ramt;
		int ch;
		
	    convertor:
		printf("............currency convertor...............");
		 printf("\n1-rupee\n2-doller\n3-euro");
		printf(" \nenter your choice....");
		scanf("%d",&ch1);
		printf("enter your choice convert to amount");
	    printf("\n1-rupee\n2-doller\n3-euro");
		printf("\nenter your choice");
		scanf("%d",&ch2);
		
	if(ch1==1)
	{
		printf("enter your amount in rupee");
		scanf("%f",&samt);
		if(ch2==1)
		{
			ramt=samt;
			printf("\n  %f rupee=%f rupee",samt,ramt);	
		}
		else if(ch2==2)
		{
			ramt=samt/75;
			printf("\n  %f rupee=%f doller",samt,ramt);
		}
		else if(ch2==3)
		{
			ramt=samt/90;
			printf("\n  %f rupee=%f euro",samt,ramt);
		}			
	}
	if(ch1==2)
     	{
     		printf("enter your amount in doller");
     		scanf("%d",&samt);
     		if(ch2==1)
     		{
     			ramt=samt*73;
     			printf("\n %f doller=%f rupee ",samt,ramt);
			}
			else if(ch2==2)
			{
				ramt=samt*74;
				printf("\n  %f doller=%f doller ",samt,ramt);
	    	}
	    	else if(ch2==3)
	    	{
	    		ramt=samt*87;
	    		printf("\n %f doller=%f euro ",samt,ramt);
			}
			else
			{
				printf("\n invalid");
			}
		
	    }
	if(ch1==3)
	{
	     	printf("enter your amount in euro");
     		scanf("%d",&samt);
     		if(ch2==1)
     		{
     			ramt=samt*84;
     			printf("\n  %feuro=%f rupee ",samt,ramt);
			}
			else if(ch2==2)
			{
			   	ramt=samt*1.15;
     			printf("\n %f euro=.2%f doller ",samt,ramt);
			}
			else if(ch2==3)
			{
				ramt=samt*84;
     			printf("\n %f euro=%f euro ",samt,ramt);
			}
			else
			{
				printf("\n invalid");
			}
	}
			printf("\n do you want to continue currency convertor");
		    scanf("%d",&ch);
		    if(ch==1)
     	    {
     	    	goto convertor;
			}
			printf("\n.............thank you...................");
			
			return 0;
		}
